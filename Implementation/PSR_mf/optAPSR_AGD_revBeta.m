function [A, obj_new, param] = optAPSR_AGD_revBeta(X,W,A0,param,obj_old)
%#codegen
% minimize the square root density cost function with respect to A
% Input:
%     X - input square root density data (d-by-N-by-n)
%     W - coefficient matrix (m-by-n)
%     A0 - initial atoms in dictionary (d-by-N-by-m)
% Output:
%     A - final atoms in dictionary (d-by-N-by-m)

coder.extrinsic('fprintf'); 
%% Initialization
[m,n] = size(W);

% initialization for AGD
A = A0;
B0 = A0;
B = B0;
lambda0 = 0;
lambda = (1+sqrt(1+4*lambda0^2))/2;
lambda0 = lambda;


% parameters
maxiterAGD = param.maxiterAGD;
epsAGD = param.epsAGD;
beta = param.beta;

% initial objective values
% obj_old = objPSR(X,W,A0);
obj_new = 2*obj_old;

s = 1;

%% Main loop
while s < maxiterAGD
    
    lambda = (1+sqrt(1+4*lambda0^2))/2;
    gamma = (1-lambda0)/lambda;
    
    % compute gradient
    gradA = gradientAPSR(X,W,A0);    
    % project to the tangent plane
    eta = projectTP(A0,gradA);
    % set the descent direction (negative gradient)
    eta = -eta;
    % update the dictionary atoms

    V = zeros(size(B));
    for i = 1:m
        B(:,:,i) = expmapPSR(A0(:,:,i),1/beta*eta(:,:,i));
        V(:,:,i) = logmapPSR(B(:,:,i),B0(:,:,i));
        A(:,:,i) = expmapPSR(B(:,:,i),gamma*V(:,:,i));
    end
    obj_new = objPSR(X,W,A);
    
    if obj_old<obj_new % if obj increases, reverse and increase beta
        beta = beta*2;
        A = A0;
        B = B0;
        lambda = lambda0;
        obj_new = obj_old;
        s = s-1;
        fprintf(1,'obj increased, reverse and increase beta\n');
    elseif((obj_old-obj_new)/n<epsAGD)
        fprintf(1,'eps reached\n');
        break;
    end
   
    A0 = A;
    B0 = B;
    lambda0 = lambda;
    obj_old = obj_new;
    s = s+1;
end
param.beta = beta;
fprintf('maxiter: %d\n', s);


