function W = optWSR(X,A,lambda)
% minimize the square root cost function with respect to W
% Input:
%     X - input square root density data (d-by-n)
%     A - atoms in dictionary (d-by-m)
%     lambda - parameter for the regularization term
% Output:
%     W - coefficient matrix (m-by-n)

%% Initialization
n = size(X,2);
m = size(A,2);

W = zeros(m,n);

%% Main loop 
% for each square root density data
for i=1:n
    T = costMatrixSR(X(:,i),A);
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