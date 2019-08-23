function [x, obj_new] = optXSR(pick, S, scale, A, x0, w, obj_old, param)

maxiterls = param.maxiterls;
alpha = param.alpha;
beta = param.beta;
sigma = param.sigma;
maxk = param.maxk;
epsls = param.epsls;
gamma = param.gamma;
flag = false;

obj_new = 2*obj_old;
for j = 1:maxiterls
    fprintf('--Line search iter %d:\n',j);
    % compute gradient
    fprintf('----Computing gradient...\n');
    gradx = gradientXSR(x0, w, A, S, pick, scale, gamma);
    % project to the tangent plane
    fprintf('----Projecting to tangent space...\n');
    eta = projectXT(x0, gradx);
    % set the descent direction (negative gradient)
    eta = -eta;
    % update the dictionary atoms
    fprintf('----Line search start...\n');
    flag = false;
    for k=1:maxk
        x = expmapSR(x0, alpha*beta^k*eta);
        s = sigma*alpha*beta^k*(eta'*eta);
        obj_new = objXSR(x, w, A, S, pick, scale, gamma);
%         if(obj_new < obj_old)
        if(obj_new < obj_old - s)
            flag = true;
            break;
        end
    end
    fprintf('----k= %d\n',k);
    if ~flag
        fprintf('----**Maxk is not big enough**\n');
    end
    fprintf('----objective value %- 7.6e\n',obj_new);        
    %     if obj_old<obj_new
    if(obj_old-obj_new<epsls && obj_old-obj_new>0)
        fprintf('--**eps reached!**\n');
        break;
    elseif obj_old<obj_new
        fprintf('--objective function value going up.\n');
        break;
    end
    
    x0 = x;
    obj_old = obj_new;
end
