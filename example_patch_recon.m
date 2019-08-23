addpath('./Implementation/SR_mf');
addpath('./Implementation/PSR_mf');

evalr = 12;
THEX = 1:24; THEY = 1:24;

for i = -2
    psizex = 5+i; psizey = 5+i;
    for snr = 10:5:30
        fname = sprintf('./data/syn_pr_snr%d.mat',snr);
        load(fname);
        scale = max(VVV(:));
        VVV = VVV/scale;
        EAP = VVV(THEX,THEY,[2:23 45:125]);
        EAP_patch = field2patches_overlap_rec(EAP,psizex,psizey); % 
        eap = EAP_patch;

        eap(eap<0) = 0;
        eap_norm = sum(eap,1);
        eap_norm(eap_norm==0) = 1;
        eap_norm = repmat(eap_norm,[size(eap,1) 1 1]);
        eap = eap./eap_norm;
        X = sqrt(eap); % square root density data

        m = 75;
        lambda = 1;
        maxiter = 20;
        eps = 1e-4;
        % param = struct('m',m,'lambda',lambda,'maxiter',maxiter,'eps',eps,...
        %     'maxiterls',5,'epsls',1e-2,'alpha',1,'beta',0.2,'maxk',5,'sigma',0.1);

        param = struct('m',m,'maxiter',maxiter,'lambda',lambda,'epsdl',eps,'maxiterAPSR',5,...
                               'eps',1e-2,'alpha',1,'beta',0.2,'maxk',5,'sigma',0.1);
        tic;
        [objhist,W,A,AtomHis] = dictionaryPSR(X,param);
        toc;

        ReconX = EstimatedPX_mex(X,W,A);

        fname = sprintf('./Dicts/PatchDictionary_iter%d_m%d_ep%d_lambda%d_snr%d_psize%d.mat',maxiter,m,uint8(-log10(eps)),lambda,snr,psizex);
        save(fname,'A','W','X','objhist','eap','ReconX');
    end
end
