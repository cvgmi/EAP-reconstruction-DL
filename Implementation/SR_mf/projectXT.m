function p = projectXT(x,g)
% project the gradient G to the tangent plane at A
% Input:
%     A - atoms in dictionary (d-by-m)
%     G - gradient with respect to A (d-by-m)
% Output:
%     P - projected gradient (d-by-m)

d = length(x);
p = (eye(d)-x*x')*g;
end
