function P = projectTP(AA,GG)
% project the gradient G to the tangent plane at A on product manifold
% Input:
%     AA - atoms in dictionary (d-by-N-by-m)
%     GG - gradient with respect to A (d-by-N-by-m)
% Output:
%     P - projected gradient (d-by-N-by-m)

[d,N,m] = size(AA);
P = zeros([d,N,m]);

parfor i = 1:N
    A = squeeze(AA(:,i,:));
    G = squeeze(GG(:,i,:));
    P(:,i,:) = projectT(A,G);
end
