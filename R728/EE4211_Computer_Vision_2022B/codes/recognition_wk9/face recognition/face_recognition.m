function [TrnFeature, TstFeature, curve] = face_recognition(Trn, Tst, feat_type, method, plotopt)

trn_num = 0;
tst_num = 0;

%% Feature Extraction

% Using raw
face_size = [64,64];
if(strcmp(feat_type,'raw'))
    TrnFeature = cell(numel(Trn),1);
    TstFeature = cell(numel(Tst),1);

    for i = 1:numel(Trn)
        TrnFeature{i} = cell(numel(Trn{i}),1);
        fprintf('Rawing the %d image\n', i);
        for j = 1:numel(Trn{i})
            fprintf('\t %d out of %d\n',j, numel(Trn{i}));
            tmp_img = rgb2gray(Trn{i}{j});
            tmp_img = imresize(tmp_img,face_size);
            TrnFeature{i}{j} = tmp_img(:);
            trn_num = trn_num + 1;
        end
    end

    for i = 1:numel(Tst)
        TstFeature{i} = cell(numel(Tst{i}),1);
        fprintf('Rawing the %d image\n', i);
        for j = 1:numel(Tst{i})
            fprintf('\t %d out of %d\n',j, numel(Tst{i}));
            tmp_img = rgb2gray(Tst{i}{j});
            tmp_img = imresize(tmp_img,face_size);
            TstFeature{i}{j} = tmp_img(:);
            tst_num = tst_num + 1;
        end
    end
end


%% Classification

% Construct the training matrix
feat_size = numel(TrnFeature{1}{1});
trn_mat = zeros(feat_size, trn_num);
trn_l = zeros(trn_num,1);
iter = 1;
for i = 1:numel(Trn)
    for j = 1:numel(Trn{i})
        trn_mat(:,iter) = TrnFeature{i}{j}(:);
        trn_l(iter) = i;
        iter = iter+1;
    end
end

% Construct the test matrix
tst_mat = zeros(feat_size, tst_num);
tst_l = zeros(tst_num,1);
iter = 1;
for i = 1:numel(Tst)
    for j = 1:numel(Tst{i})
        tst_mat(:,iter) = TstFeature{i}{j}(:);
        tst_l(iter) = i;
        iter = iter+1;
    end
end

% Using PCA
if(strcmp(method, 'pca'))
    [coef, score, latent] = pca(trn_mat');
    pca_num = 100;
    fprintf('Principle Components Number : %d, %f variance preserved\n', pca_num, sum(latent(1:pca_num))/sum(latent(:)));
    coef = coef(:,1:pca_num);
    trn_mat = coef' * trn_mat;
    tst_mat = coef' * tst_mat;
    save coef.mat coef 
end

% Using Fisher

% Using Fisher
if(strcmp(method,'fisher'))
    %%{
    % Implement PCA first
    [coef, score, latent] = pca(trn_mat');
    pca_num =100;
    fprintf('Principle Components Number : %d, %f variance preserved\n', pca_num, sum(latent(1:pca_num))/sum(latent(:)));
    coef = coef(:,1:pca_num);
    trn_mat = coef' * trn_mat;
    tst_mat = coef' * tst_mat;
    %}
    % Implement fisher linear discriminant
    class_num=5*ones(1,23);
    trn_T = slfld(trn_mat,class_num);
    trn_mat = trn_T' * trn_mat;
    tst_mat = trn_T' * tst_mat;
    save fisher.mat trn_T
end



%% Performance evaluation

M = slmetric_pw(trn_mat, tst_mat, 'sqdist');%compute the distance between trn_mat and tst_mat
[Q,I] = sort(M,'ascend');
curve = zeros(tst_num,1);

for i = 1:tst_num
    tmp_vector = zeros(size(curve,1),1);
    for j = 1:length(I(:,i))
        tmp_vector(j) = trn_l(I(j,i));
    end
    tmp_vector = myunique(tmp_vector);%
    curve(i) = find(tmp_vector == tst_l(i), 1 );
end
plot_accumulate(curve,plotopt);
% for i=1:23
% a(i)=1*(i)/23;
% end
% plot(a);
end

function [Y] = myunique(X)
    u = unique(X);
    Y = X;
    l = zeros(length(u),1);
    for i = 1:numel(X)
        if(l(X(i)==u) == 0)
            l(X(i)==u) = 1;
        else
            Y(i) = -100;
        end
    end
    Y(Y == -100) = [];
end
