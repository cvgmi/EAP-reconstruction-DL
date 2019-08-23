function y = expmapSR(x,v)
% compute the exp map on sphere exp_x(v)
% Input:
%     x, v - d-by-1 vectors
%     to ensure exp map is a bijection, |v| \in [0,\pi]
% Output:
%     y - expmap (d-by-1 vector)

normv = norm(v);
if (normv == 0)
    y = x;
else
    v = v/normv;
    y = cos(normv)*x+sin(normv)*v;
end