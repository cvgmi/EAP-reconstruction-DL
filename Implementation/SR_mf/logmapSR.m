function v = logmapSR(x,y)
% compute the log map on sphere log_x(y)
% Input:
%     x, y - d-by-1 vectors
% Output:
%     v - logmap (d-by-1 vector)

temp = x'*y;
u = y - temp*x;
normu = norm(u);
if (normu == 0)
    v = u;
else
    u = u/norm(u);
    if temp>1 
        temp = 1; 
    end
    if temp<-1 
        temp = -1; 
    end
    v = acos(temp)*u;
end
