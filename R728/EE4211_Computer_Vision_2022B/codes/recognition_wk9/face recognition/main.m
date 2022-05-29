[Trn, Tst, NameID] = load_img();

% PCA
  [TrnFeature, TstFeature, curve] = face_recognition(Trn, Tst, 'raw', 'pca','b-');
% LDA
  [TrnFeature, TstFeature, curve] = face_recognition(Trn, Tst, 'raw', 'fisher','b-');


