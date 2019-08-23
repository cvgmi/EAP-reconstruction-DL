function xh = EstimatedX(X,W,A)
% compute estimation xh from weights and atoms learned 
% Input:
%     X - input square root density data (d-by-n)
%     W - coefficient matrix (m-by-n)
%     A - atoms in dictionary (d-by-m)
% Output:
%     xh - output square root density field estimation (d-by-n)

n = size(X,2);
M = zeros(size(X));
% main
parfor i=1:n
    LOG = logmapSRi(X(:,i),A); % LOG: d-by-m matrix with the jth column log(x_i,a_j)
    M(:,i) = LOG*W(:,i); % T: d-by-n matrix with the ith column sum of W_ji*log(x_i,a_j)
end
xh = expmapSRi(X,M);