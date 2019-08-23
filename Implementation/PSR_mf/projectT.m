function P = projectT(A,G)
% project the gradient G to the tangent plane at A
% Input:
%     A - atoms in dictionary (d-by-m)
%     G - gradient with respect to A (d-by-m)
% Output:
%     P - projected gradient (d-by-m)

[d,m] = size(A);
P = zeros([d,m]);

parfor i=1:m
    P(:,i) = (eye(d)-A(:,i)*A(:,i)')*G(:,i);
end
