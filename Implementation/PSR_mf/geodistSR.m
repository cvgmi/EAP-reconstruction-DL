function d = geodistSR(x,y)
% compute the geodesic distance on sphere dist(x,y)
% Input:
%     x, y - d-by-1 vectors
% Output:
%     d - geodesic distance

d = acos(x'*y);