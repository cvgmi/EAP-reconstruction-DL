function T = costMatrixPSR(X,AA)
% compute the matrix T for the optimization step wrt W
% Input:
%     X - square root density field (d-by-N)
%     AA - atoms in dictionary (d-by-N-by-m)
% Output:
%     T - symmetric matrix (m-by-m)

[~,N,m] = size(AA);
T = zeros(m,m);
parfor j = 1:N
    x = squeeze(X(:,j));
    A = squeeze(AA(:,j,:));
    V = logmapSRi(x,A);
    T = T+V'*V;
end
