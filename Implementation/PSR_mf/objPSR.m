function obj=objPSR(X,W,A)
%#codegen
% compute the objective function for product of sphere approximation
% Input:
%     X - input square root density field data (d-by-N-by-n)
%     W - coefficient matrix (m-by-n)
%     A - atoms in dictionary (d-by-N-by-m)
% Output:
%     obj - the value of objective function

% initialization
[d,N,n] = size(X);
[m,~] = size(W);

% main
obj = 0;
parfor i=1:n
    LOG = logmapPSRi(X(:,:,i),A);
    LOG = reshape(LOG,[d*N m]);
    M = reshape(LOG*W(:,i),[d N]);
    obj = obj + trace(M'*M);
end