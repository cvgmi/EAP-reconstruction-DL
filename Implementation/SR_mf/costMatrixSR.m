function T = costMatrixSR(x,A)
% compute matrix T for the optimization step wrt W
% Input:
%     x - one square root density data (d-by-1)
%     A - atoms in dictionary (d-by-m)
% Output:
%     T - symmetric matrix (m-by-m)

V = logmapSRi(x,A);

T = V'*V;