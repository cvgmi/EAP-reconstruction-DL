function obj=objSR(X,W,A)
% compute the objective function for sphere approximation
% Input:
%     X - input square root density data (d-by-n)
%     W - coefficient matrix (m-by-n)
%     A - atoms in dictionary (d-by-m)
% Output:
%     obj - the value of objective function

% initialization
d = size(X,1);
n = size(W,2);

T = zeros(d,n);
parfor i = 1:n
    LOG = logmapSRi(X(:,i),A); % LOG d-by-m matrix with the jth column log(x_i,a_j)
    T(:,i) = LOG*W(:,i); % T: d-by-n matrix with the ith column sum of W_ji*log(x_i,a_j)
end
obj = trace(T'*T);