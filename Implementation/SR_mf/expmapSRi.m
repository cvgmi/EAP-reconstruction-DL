function Y = expmapSRi(X,V)
% compute the exp map on sphere for a set of points exp_X(V)
% Input:
%     X - d-by-m matrix, with each column a squre root density x
%     V - d-by-m matrix, with each column a tangent vector v
%     to ensure exp map is a bijection, |v| \in [0,\pi]
% Output:
%     Y - expmap (d-by-m matrix), each column exp_x(v)

[d,~] = size(X);
normV = sqrt(sum(V.^2,1)); %1-by-m
normV0 = normV;
normV(normV == 0) = 1;
V = V./(repmat(normV,d,1));
Y = X*diag(cos(normV0))+V*diag(sin(normV0));
