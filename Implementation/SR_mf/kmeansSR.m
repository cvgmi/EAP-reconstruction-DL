function A = kmeansSR(X,k)
% kmeans for a collection of square root densities
% Input:
%    X - n square root densities with d dimensions (d-by-n)
%    k - the number of clusters
% Output:
%    A - k clusters (d-by-k)

%% Initialization
[~,n] = size(X);

% randomly select k square root densities from X as the initial A
A = X(:,ceil(rand(k,1)*n));

% allocate variables
g0 = ones(n,1);
gIdx = zeros(n,1);
D = zeros(n,k);

%% Main loop
while any(g0~=gIdx)
    g0 = gIdx;
    
    % compute the distance matrix D
    for i=1:n
        for j=1:k
            D(i,j) = X(:,i)'*A(:,j); 
        end
    end
       
    % assign each data to the closest centroid with largest cos 
    [~,gIdx]=max(D,[],2);
    
    % update centroids using means of partitions
    for i=1:k
        idx = (gIdx==i);
        if (sum(idx)==0)
            A(:,i) = X(:,ceil(rand(1,1)*n));
        else
            M = sum(X(:,gIdx==i),2); 
            A(:,i) = M/norm(M);
        end
    end
end