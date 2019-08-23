function V = logmapSRi(x,Y)
% compute the log map on sphere at x for each column in Y log_x(Y) 
% Input:
%     x - d-by-1 vector
%     Y - d-by-m matrix, each column an atom (d-by-1)
% Output:
%     V - logmap of each column of Y at x (d-by-m matrix)

[d,m] = size(Y);
temp = x'*Y; 
U = Y - repmat(x,1,m)*diag(temp);
normU = sqrt(sum(U.^2,1));
normU(normU == 0) = 1;
U = U./(repmat(normU,d,1));
temp(temp>1) = 1;
temp(temp<-1) = -1;
V = U*diag(acos(temp)); 

