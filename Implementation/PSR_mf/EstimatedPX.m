function Xh = EstimatedPX(X,W,A)
% estimate new Xh from weights and atoms learned 
% Input:
%     X - input square root density field data (d-by-N-by-n)
%     W - coefficient matrix (m-by-n)
%     A - atoms in dictionary (d-by-N-by-m)
% Output:
%     Xh - output square root density field estimation (d-by-N-by-n)

[d,N,n] = size(X);
m = size(W,1);
Xh = zeros(size(X));

parfor i=1:n
    LOG = logmapPSRi(X(:,:,i),A);
    LOG = reshape(LOG,[d*N m]);
    M = reshape(LOG*W(:,i),[d N]);
    Xh(:,:,i) = expmapPSR(X(:,:,i),M);
end