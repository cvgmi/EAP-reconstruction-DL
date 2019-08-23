function VV = logmapPSRi(X,YY)
%#codegen
% compute the log map on the product space of spheres log_X(Y)
% Input:
%     X - d-by-N matrices, a point in the product space
%     YY - d-by-N-by-m matrices, m points in the product space 
% Output:
%     V - logmap of each d-by-N matrix in Y (d-by-N-m matrix)

[~,N,~] = size(YY);
VV = zeros(size(YY));
% do logmap for each column of X (d-by-1 vector) and the corresponding
% columns in YY
parfor i = 1:N
    x = squeeze(X(:,i));
    Y = squeeze(YY(:,i,:));
    VV(:,i,:) = logmapSRi(x,Y);
end
