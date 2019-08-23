function obj = objXSR(x, w, A, S, pick, scale, gamma)
% compute the objective function for reconstruction using learned
% dictionary
%       ||\sum_j log_x(a_j)||^2_x + ||F_u(X(matrix form of x^2))-S||^2_F
% Input:
%     x - input square root density data (d-by-1)
%     w - coefficient matrix (m-by-1)
%     A - atoms in dictionary (d-by-m)
%     S - partial signal S(q)
%     pick - sampling matrix
% Output:
%     obj - the value of objective function

[Nx,Ny,Nz] = size(S);

LOG = logmapSRi(x,A);   % LOG: d-by-m matrix with the jth column log(x,a_j)
T = LOG*w;              % T: d-by-1 vector sum of w_j*log(x,a_j)
obj = trace(T'*T);      % first term in the objective function

diff = pick.*(fftshift(fftn(reshape((x.^2)*scale,Nx,Ny,Nz)))/sqrt(Nx*Ny*Nz)-S);
diff2 = diff.^2;
obj = obj + gamma*sum(diff2(:));

end