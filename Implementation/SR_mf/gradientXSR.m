function gradX = gradientXSR(x, w, A, S, pick, scale, gamma)
% compute the gradient with respect to A
% Input:
%     x - input square root density data (d-by-1)
%     w - coefficient matrix (m-by-1)
%     A - atoms in dictionary (d-by-m)
% Output:
%     gradX - the gradient with respect to X (d-by-1)

%% Initialization
[d,m] = size(A);
[Nx,Ny,Nz] = size(pick);
cx = (Nx+1)/2;
cy = (Ny+1)/2;
cz = (Nz+1)/2;
picks = pick(:);
gradX = zeros(d,1);
Lg=logmapSRi(x,A);
vec2 = Lg*w;
diff = pick.*(fftshift(fftn(reshape((x.^2)*scale,Nx,Ny,Nz)))/sqrt(Nx*Ny*Nz)-S);
diff = diff(:);

%% for each component in x
for i=1:d
    grad = zeros(d,1);
    for j = 1:m
        aj = A(:,j);
        uj = aj-(aj'*x)*x;
        normu = norm(uj);
        inner = aj'*x;
        temp = inner*eye(d);
        vec1 = temp(:,i);
        grad = grad + w(j)*((-aj(i)/sqrt(1-inner^2))*uj/normu...
            + acos(inner)*(eye(d)/normu-uj*uj'/(normu^3))*(-aj(i)*x-vec1));
    end
    gradX(i) = 2*vec2'*grad;
    for k = 1:Nx*Ny*Nz
        if picks(k) == 0
            continue;
        end
        % transform vector x into matrix form
        [ri,si,ti] = ind2sub(size(pick),i);
        [rk,sk,tk] = ind2sub(size(pick),k);
        % taking care of matlab computation of fftshift(fftn(.))
        ri = ri - 1; si = si - 1; ti = ti - 1;
        rk = rk - cx; sk = sk - cy; tk = tk - cz;
        gradX(i) = gradX(i) + gamma*2*diff(k)*exp(-2*pi*1i*(ri*rk+si*sk+ti*tk)/Nx)*(2*x(i))*scale/sqrt(d);
    end
end

