function gradA = gradientAPSR(XX,W,AA)
% compute the gradient with respect to A for product manifold of sphere
% Input:
%     XX - input square root density data (d-by-N-by-n)
%     W - coefficient matrix (m-by-n)
%     AA - initial atoms in dictionary (d-by-N-by-m)
% Output:
%     gradA - gradient with respect to A (d-by-N-by-m)

%% Initialization
[d,N,m] = size(AA);
gradA = zeros([d,N,m]);

%% for each N SR components
parfor i = 1:N
    A = squeeze(AA(:,i,:));
    X = squeeze(XX(:,i,:));
    gradA(:,i,:) = gradientASR(X,W,A);
end
