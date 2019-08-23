function A = optAPSR(X,W,A0,param)
%#codegen
% minimize the cost function with respect to A for product manifold
% Input:
%     X - input square root density data (d-by-N-by-n)
%     W - coefficient matrix (m-by-n)
%     A0 - initial atoms in dictionary (d-by-N-by-m)
% Output:
%     A - final atoms in dictionary (d-by-N-by-m)

coder.extrinsic('fprintf');
%% Initialization
[m,n] = size(W);
A = A0;

% parameters
maxiter = param.maxiterAPSR;
eps = param.eps;
alpha = param.alpha;
beta = param.beta;
%sigma = param.sigma;
maxk = param.maxk;

% initial objective values
obj_old = objPSR(X,W,A0);
obj_new = 2*obj_old;

%% Main loop
for iter=1:maxiter
    % compute gradient
    gradA = gradientAPSR(X,W,A0);
    % project to the tangent plane
    eta = projectTP(A0,gradA);
    % set the descent direction (negative gradient)
    eta = -eta;
    % update the dictionary atoms
    for k=1:maxk
        %sum = 0;
        parfor i =1:m
        %for i=1:m
            A(:,:,i) = expmapPSR(A0(:,:,i),alpha*beta^k*eta(:,:,i));
            %sum = sum + sigma*alpha*beta^k*sqrt(eta(:,i)'*eta(:,i));
        end
        obj_new = objPSR(X,W,A);
        if(obj_new < obj_old)
            break;
        end
    end
    fprintf('maxk: %d\n',k);
    if obj_old<obj_new
        fprintf('maxk not big enough\n');
    end

    if((obj_old-obj_new)/n<eps)
        fprintf('eps reached\n');
        break;
    end
    A0 = A;
    obj_old = obj_new;
end
fprintf('maxiter: %d\n', iter);



