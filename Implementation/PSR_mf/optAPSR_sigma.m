function [A, obj_new] = optAPSR_sigma(X,W,A0,param,obj_old)
%#codegen
% minimize the density cost function with respect to A on product manifold
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
sigma = param.sigma;
maxk = param.maxk;

% initial objective values
obj_new = 2*obj_old;

%% Main loop
for iter=1:maxiter
    % compute gradient
    gradA = gradientAPSR(X,W,A0);
    % project to the tangent plane
    eta = projectTP(A0,gradA);
    % set the descent direction (negative gradient)
    eta = -eta;
    s = 0;
    % update the dictionary atoms
    for k=1:maxk
        s = 0;
        for i=1:m
            A(:,:,i) = expmapPSR(A0(:,:,i),alpha*beta^k*eta(:,:,i));
            temp = sqrt(sum(sum(squeeze(eta(:,:,i)).^2)));
            s = s + sigma*alpha*beta^k*temp;
        end
        obj_new = objPSR(X,W,A);
        if(obj_new < obj_old - s)
            break;
        end
    end
    fprintf('---maxk: %d\n',k);
    if obj_old-obj_new<s
        fprintf('---**maxk not big enough**\n');
    end

    if((obj_old-obj_new)/n<eps)
        fprintf('---**eps reached**\n');
        break;
    end
    A0 = A;
    obj_old = obj_new;
end
fprintf('---maxiter: %d\n', iter);



