function A = optASR(X, W, A0, param)
% minimize the square root density cost function with respect to A
% Input:
%     X - input square root density data (d-by-n)
%     W - coefficient matrix (m-by-n)
%     A0 - initial atoms in dictionary (d-by-m)
% Output:
%     A - final atoms in dictionary (d-by-m)

coder.extrinsic('fprintf'); 
%% Initialization
n = size(W,2);
A = A0;
s = 0;

% parameters
maxiterls = param.maxiterls;
epsls = param.epsls;
alpha = param.alpha;
beta = param.beta;
sigma = param.sigma;
maxk = param.maxk;

% initial objective values
obj_old = objSR(X,W,A0);
obj_new = 2*obj_old;

%% Main loop
for iter=1:maxiterls
    % compute gradient
    gradA = gradientASR(X,W,A0);
    % project to the tangent plane
    eta = projectT(A0,gradA);
    % set the descent direction (negative gradient)
    eta = -eta;
    % update the dictionary atoms
    for k=1:maxk
        A = expmapSRi(A0,alpha*beta^k*eta);
        temp = diag(eta'*eta);
        temp = sqrt(temp);
        s = sigma*alpha*beta^k*sum(temp);
        
        obj_new = objSR(X,W,A);
        if(obj_new < obj_old - s)
            break;
        end
    end
    
    if obj_old-obj_new < s
        fprintf('maxk not sufficiently big.\n');
    end

    if((obj_old-obj_new)/n<epsls)
        fprintf('eps reached.\n');
        break;
    end
    A0 = A;
    obj_old = obj_new;
end


