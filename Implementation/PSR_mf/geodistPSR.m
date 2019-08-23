function d = geodistPSR(X,Y)
% compute the geodesic distance on product manifold of unit sphere dist(x,y)
% Input:
%     x, y - d-by-n vectors
% Output:
%     d - geodesic distance

[~,n] = size(X);
D = zeros(n,1);
for i = 1:n
    D(i) = acos(X(:,i)'*Y(:,i));
end
d = norm(D,2);
