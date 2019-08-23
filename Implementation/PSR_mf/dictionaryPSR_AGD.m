function [objhist, W, A, AtomHist] = dictionaryPSR_AGD(X, param)
% Dictionary learning for square root density
% Input:
%    X - input square root density field data (d-by-N-by-n)
%    m - number of atoms in dictionary
%    lambda - coefficient for sparsity constraint
%    maxiter - maximum number of iterations
%    eps - stopping criterion on change of objective function value
% Output:
%     objhist - objective function value history (2*maxiter+1-by-1)
%     W - coefficient matrix (m-by-n)
%     A - atoms in dictionary (d-by-N-by-m)
%     AtomHist - history of the atoms (maxiter+1-by-d-by-N-by-m)

m = param.m;
lambda = param.lambda;
epsdl = param.eps;
maxiter = param.maxiter;
% maxiterAPSR = param.maxiterAPSR;
% eps = param.eps;
% alpha = param.alpha;
% beta = param.beta;
% maxk = param.maxk;
% sigma = param.sigma;

% paramASP = struct('maxiterAPSR',maxiterAPSR,'eps',eps,'alpha',alpha,...
%                   'beta',beta,'maxk',maxk,'sigma',sigma);

%% Initialization
[d,N,n] = size(X);
VecX = reshape(X, [d*N n]);
W = rand(m,n);
AtomHist = zeros(maxiter+1,d,N,m);
objhist = zeros(2*maxiter+1,1);

%% initialize the dictionary atoms using k-means
% using normal kmeans then normalize
[~,VecA0] = kmeanspp(VecX,m);
A0 = reshape(VecA0, [d N m]);
% normalize A0 such that A0 is on SR manifold
for i=1:m
    At = squeeze(A0(:,:,i));
    normAt = sqrt(sum(At.^2,1));
    normAt(normAt == 0) = 1;
    At = At./repmat(normAt,d,1);
    A0(:,:,i) = At;
end
A0 = abs(A0);
AtomHist(1,:,:,:) = A0;

% alternative: k-means on SR manifold (slow)
% A0 = kmeansSR_mex(X,int32(m));

%% centering constraint W1=1 (affine constraints)
W = W./repmat(sum(W,1),m,1);

%% compute the objective function
obj = objPSR_mex(X,W,A0); 
fprintf('Initial objective value = %- 9.8e\n',obj);
objhist(1) = obj;
fprintf('====================================================\n');
%% main loop
for iter = 1:maxiter
    fprintf('Iter = %2.0f\n',iter);
    
    % optimization wrt W
    fprintf('@ Sparse coding step...');
    W = optWPSR(X,A0,lambda);
    %W = optWPSR_OMP(X,A0);
    obj = objPSR_mex(X,W,A0);
    objhist(2*iter) = obj;
    fprintf('done.\nObjective value %- 7.6e\n',obj);
    
    % optimization wrt A
    fprintf('@ Codebook update step...\n');
%     [A,obj,param] = optAPSR_AGD_mex(X,W,A0,param,obj);
    [A,obj,param] = optAPSR_AGD_revBeta_mex(X,W,A0,param,obj);
    objhist(2*iter+1) = obj;
    fprintf('Done.\nobjective value %- 7.6e\n',obj);
    
    % stopping criterior
   if (abs(objhist(2*iter+1)-objhist(2*iter))/n < epsdl)
       A = A0;
       fprintf('Converged!\n');
       break;
   end
    
    A0 = A;
    AtomHist(iter+1,:,:,:) = A0;
    fprintf('====================================================\n');
end
