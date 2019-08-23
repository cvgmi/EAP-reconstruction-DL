function Y = expmapPSR(X,V)
% compute the exp map on product space of sphere exp_X(V)
% Input:
%     X, V - d-by-N matrices
%     to ensure exp map is a bijection, |v| \in [0,\pi]
% Output:
%     Y - expmap (d-by-N vector)

[d,~] = size(X);
normV = sqrt(sum(V.^2,1)); 
normV0 = normV;
normV(normV == 0) = 1;
V = V./(repmat(normV,d,1));
Y = X*diag(cos(normV0))+V*diag(sin(normV0));
