function gradA = gradientASR(X,W,A)
% compute the gradient with respect to A
% Input:
%     X - input square root density data (d-by-n)
%     W - coefficient matrix (m-by-n)
%     A - initial atoms in dictionary (d-by-m)
% Output:
%     gradA - the gradient with respect to A (d-by-m)

%% Initialization
d = size(X,1);
[m,n] = size(W);
Wt = W';

gradA = zeros([d,m]);

%% Main loop for each atom Aj
parfor j=1:m
    for i=1:n
        Lg = logmapSRi(X(:,i),A);
        M = Lg*W(:,i);

        uij = A(:,j)-(X(:,i)'*A(:,j))*X(:,i);
        normu = norm(uij);
        inner = X(:,i)'*A(:,j);
        if (normu ~= 0)&&(inner^2 < 1-1E-5)
            dA = (eye(d)/normu-uij*uij'/(normu^3))*(eye(d)-X(:,i)*X(:,i)');
            dA = dA*acos(inner)-uij*X(:,i)'/normu/sqrt(1-inner^2);
            gradA(:,j) = gradA(:,j) + Wt(i,j)*dA'*M;
        end
    end
end
gradA = 2*gradA;
