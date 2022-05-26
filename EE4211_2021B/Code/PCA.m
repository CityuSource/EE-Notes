x = [1,2,4,5,5,8];
meanx = sum(x) / length(x);

y = [1,1,5,5,6,5];
meany = sum(y) / length(y);

A = [1 - meanx, 2 - meanx, 4 - meanx, 5 - meanx, 5 - meanx, 8 - meanx;
     1 - meany, 1 - meany, 5 - meany, 5 - meany, 6 - meany, 5 - meany];
B = A';

% C = cov(X)
C = A*B;


ev = sort(eig(C));

[V,D] = eig(C);
% D = eigenvalue
% V = eigenvector
% C = cov martix

V
D

