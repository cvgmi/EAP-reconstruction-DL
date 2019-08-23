function D = geodesicMatrixSR(X,T)
% compute the geodesic distance between training and testing square-root
% densities
% Input:
%     X - training samples (d-by-n)
%     T - testing samples (d-by-m)
% Output:
%     D - geodesic distance matrix (m-by-n)

n = size(X,2);
m = size(T,2);

D = zeros(m,n);

for i=1:m
    for j=1:n
        D(i,j) = geodistSR(T(:,i),X(:,j));
    end
end