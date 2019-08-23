% an example of using dictionarySR

% load a simple data set
load '5Dsr.mat';

% dictionary learning
param = struct('m',10,'lambda',10,'maxiter',20,'eps',1e-10,'maxiterls',5,'epsls',1e-5,'alpha',1,'beta',0.1,'maxk',5,'sigma',0);
[objhist,W,A] = dictionarySR(X,param);

xh = EstimatedX_mex(X,W,A);

