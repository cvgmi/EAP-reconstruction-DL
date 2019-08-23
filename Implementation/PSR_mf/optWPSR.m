function W = optWPSR(X,A,lambda)
% minimize the cost function with respect to W on product manifold
% Input:
%     X - input square root density field data (d-by-N-by-n)
%     A - atoms in dictionary (d-by-N-by-m)
%     lambda - parameter for the regularization term
% Output:
%     W - coefficient matrix (m-by-n)

%% Initialization
n = size(X,3);
m = size(A,3);

W = zeros(m,n);

%% Main loop 
% for each square root density field data
for i=1:n
    T = costMatrixPSR_mex(squeeze(X(:,:,i)),A);
    cvx_clear
    cvx_begin
        cvx_quiet(true);
        variable c(m);
        minimize( quad_form(c,T) + lambda * norm(c,1) );
        subject to
            sum(c) == 1;
    cvx_end
    
    W(:,i) = c;
end