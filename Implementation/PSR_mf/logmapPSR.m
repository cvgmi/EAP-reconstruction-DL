function V = logmapPSR(X,Y)
% compute the log map on the product space of spheres log_X(Y)
% Input:
%     X, Y - d-by-N matrices, points in the product space
% Output:
%     V - logmap (d-by-N matrix)

V = zeros(size(X));
% do logmap for each column of X and Y, which are d-by-1 vectors
for i = 1:size(X,2)
    x = squeeze(X(:,i));
    y = squeeze(Y(:,i));
    % logmap of SR
    temp = x'*y;
    u = y - temp*x;
    normu = norm(u);
    if (normu == 0)
        v = u;
    else
        u = u/norm(u);
        if temp>1 temp = 1; end
        if temp<-1 temp = -1; end
        v = acos(temp)*u;
    end
    V(:,i) = v;

end
