function A = optASR_sigma(X,W,A0)
%#codegen
% minimize the square root density cost function with respect to A
% Input:
%     X - input square root density data (d-by-n)
%     W - coefficient matrix (m-by-n)
%     A0 - initial atoms in dictionary (d-by-m)
% Output:
%     A - final atoms in dictionary (d-by-m)

coder.extrinsic('fprintf'); 
%% Initialization
[m,n] = size(W);

A = A0;

% parameters
maxiter = 5;
eps = 1e-7;
alpha = 1;
beta = 0.1;
sigma = 0.9;
maxk = 30;

% initial objective values
obj_old = objSR(X,W,A0);
obj_new = 2*obj_old;

%% Main loop
for iter=1:maxiter
    % compute gradient
    gradA = gradientASR(X,W,A0);
    % project to the tangent plane
    eta = projectT(A0,gradA);
    % set the descent direction (negative gradient)
    eta = -eta;
    % update the dictionary atoms
    for k=1:maxk
        sum = 0;
        parfor i=1:m
            A(:,i) = expmapSR(A0(:,i),alpha*beta^k*eta(:,i));
            sum = sum + sigma*alpha*beta^k*sqrt(eta(:,i)'*eta(:,i));
        end
        obj_new = objSR(X,W,A);
        if(obj_new < obj_old - sum)
            break;
        end
    end
    fprintf('maxk: %d\n',k);
    if obj_old-obj_new<sum
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


