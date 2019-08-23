function [objhist, W, A] = dictionarySR(X, param)
% Dictionary learning for square root density
% Input:
%    X - input square root density data (d-by-n)
%    m - number of atoms in dictionary
% Output:
%     objhist - objective function value history
%     W - coefficient matrix (m-by-n)
%     A - atoms in dictionary (d-by-m)

%% parameters
maxiter = param.maxiter;
lambda = param.lambda;
eps = param.eps;
m = param.m;

%% Initialization
[d,n] = size(X);
W = rand(m,n);

% using normal kmeans then normalize
% initialize the dictionary A using k-means
[~,A0] = kmeanspp(X,m);
% normalize A0 such that A0 is on SR manifold
normA0 = sqrt(sum(A0.^2,1));
normA0(normA0 == 0) = 1;
A0 = A0./repmat(normA0,d,1);

% alternative: k-means on SR manifold (slow)
% A0 = kmeansSR_mex(X,int32(m));

% centering constraint W1=1 (affine constraints)
W = W./repmat(sum(W,1),m,1);

% compute the objective function
obj = objSR_mex(X,W,A0); 
fprintf(' initial objective value = %- 9.8e\n',obj);
objhist = zeros(2*maxiter+1,1);
objhist(1) = obj;

%% main loop
for iter = 1:maxiter
    fprintf('iter = %2.0f\n',iter);
    
    %% optimization wrt W
    fprintf('optimizing wrt W...');
    W = optWSR(X,A0,lambda);
    fprintf('done!\n');
    obj = objSR_mex(X,W,A0);
    objhist(2*iter) = obj;
    fprintf('objective value %- 7.6e\n',obj);
    
    %% optimization wrt A
    fprintf('optimizing wrt A...');
    A = optASR_mex(X,W,A0,param);
    fprintf('done!\n');
    obj = objSR_mex(X,W,A);
    objhist(2*iter+1) = obj;
    fprintf('objective value %- 7.6e\n',obj);
    
    %% stopping criterior
   if ((objhist(2*iter)-objhist(2*iter+1))/n < eps)
       A = A0;
       break;
   end
   A0 = A;
end
