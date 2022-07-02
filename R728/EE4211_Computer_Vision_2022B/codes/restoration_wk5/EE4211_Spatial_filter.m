clc;
close;
clear all;
I = im2double(imread('Fig0507(a)(ckt-board-orig).tif'));
[m, n] = size(I);
%% Mean Filters (page 32 in lecture note 5)
% adding Gaussian noise, you can change both parameters as you like.
mean = 0.0;
std = 0.1;
gaussian_noise = mean + std*randn(m,n);
J1 = I + gaussian_noise;
% using 3x3 arithmetic mean filter
h = 1/ (3. ^2)*ones (3); 
J2 = imfilter(I, h,'conv','replicate','same'); 
% using 3x3 geometric mean filter
tmp_J3 = imfilter(log(I), h,'conv','replicate','same'); 
J3 = exp(tmp_J3);
% plot
figure;
subplot(221);
imshow(I)
title('original image')
subplot(222);
imshow(J1);
title('original image + gaussian image')
subplot(223);
imshow(J2);
title('3x3 arithmetic mean filtered image')
subplot(224);
imshow(J3);
title('3x3 geometric mean filtered image')
%% Mean filters Cont'd do (page 33-34 in lecture note 5)
% more details about adding salt & pepper noise are displayed in AddNoise.m
% just add salt noise (light points) with probability 0.1
tmp_mask = rand(m,n);
salt_idx = find(tmp_mask <= 0.1);
J1 = I;
J1(salt_idx) = 1;
% just add pepper noise (dark points) with probability 0.1
tmp_mask = rand(m,n);
pepper_idx = find(tmp_mask <= 0.1);
J2 = I;
J2(pepper_idx) = 0;
% using 3x3 Contraharmonic Filter with parameter Q = 1.5 to process J1
J3 = Contraharmonic_Filter(J1, [3,3], 1.5);
% using 3x3 Contraharmonic Filter with parameter Q = -1.5 to process J2
J4 = Contraharmonic_Filter(J2, [3,3], -1.5);
% using 3x3 Contraharmonic Filter with parameter Q = -1.5 to process J1
J5 = Contraharmonic_Filter(J1, [3,3], -1.5);
% using 3x3 Contraharmonic Filter with parameter Q = 1.5 to process J2
J6 = Contraharmonic_Filter(J2, [3,3], 1.5);
figure;
subplot(321);
imshow(J1);
title('original image + salt noise (J1)')
subplot(322);
imshow(J2);
title('original image + pepper image (J2)')
subplot(323);
imshow(J3);
title('3x3 contraharmonic mean filtered J1 with Q=1.5 (Wrong)')
subplot(324);
imshow(J4);
title('3x3 contraharmonic mean filtered J2 with Q=-1.5 (Wrong)')
subplot(325);
imshow(J5);
title('3x3 contraharmonic mean filtered J1 with Q=-1.5 (Correct)')
subplot(326);
imshow(J6);
title('3x3 contraharmonic mean filtered J2 with Q=1.5 (Correct)')


%% Min and Max filters (page 40-41 in lecture note 5)
% just add salt noise (light points) with probability 0.1
tmp_mask = rand(m,n);
salt_idx = find(tmp_mask <= 0.1);
J1 = I;
J1(salt_idx) = 1;
% just add pepper noise (dark points) with probability 0.1
tmp_mask = rand(m,n);
pepper_idx = find(tmp_mask <= 0.1);
J2 = I;
J2(pepper_idx) = 0;
% using 3x3 Min filter to process J1
J3 = ordfilt2(J1,1,ones(3,3), 'symmetric');
% using 3x3 Max filter to process J2
J4 = ordfilt2(J2,9,ones(3,3), 'symmetric');

figure;
subplot(221);imshow(J1);title('original image + salt noise (J1)')
subplot(222);imshow(J2);title('original image + pepper image (J2)')
subplot(223);imshow(J3);title('3x3 Min filtered J1')
subplot(224);imshow(J4);title('3x3 Max filtered J2')

J2 = I;
J2(pepper_idx) = 0;
% using 3x3 Min filter to process J2
J4 = ordfilt2(J2,1,ones(3,3), 'symmetric');
% using 3x3 Max filter to process J1
J3 = ordfilt2(J1,9,ones(3,3), 'symmetric');

figure;
subplot(221);imshow(J1);title('original image + salt noise (J1)')
subplot(222);imshow(J2);title('original image + pepper image (J2)')
subplot(223);imshow(J3);title('3x3 Max filtered J1')
subplot(224);imshow(J4);title('3x3 Min filtered J2')



%% Median filters (page 48 in lecture note 5)
% adding salt & pepper noise with the same probability 0.1
% Why 0.2? because 0.1+0.1=0.2
J1 = imnoise(I,'salt & pepper', 0.2);
% using 3x3 median filter to process J1
J2 =  ordfilt2(J1,5,ones(3,3), 'symmetric');
% using 3x3 median filter to process J2
J3 =  ordfilt2(J2,5,ones(3,3), 'symmetric');
% using 3x3 median filter to process J3
J4 =  ordfilt2(J3,5,ones(3,3), 'symmetric');
figure;
subplot(221);
imshow(J1)
title('original image + salt & pepper noise')
xlabel('J1');
subplot(222);
imshow(J2);
xlabel('J2');
title('3x3 median filtered J1 ')
subplot(223);
imshow(J3);
xlabel('J3');
title('3x3 median filtered J2 ')
subplot(224);
imshow(J4);
xlabel('J4');
title('3x3 median filtered J3')

%% midpoint filter (page 51-52 in lecture note 5)
J1 = imnoise(I,'salt & pepper', 0.05);
figure;
subplot(221);imshow(I);title('Original image');
subplot(222);imshow(J1); title('salt & pepper Noise image');

J2 = (ordfilt2(J1,1,ones(3,3), 'symmetric')+ordfilt2(J1,9,ones(3,3), 'symmetric'))/2;
subplot(223);imshow(J2); title('salt & pepper Noise with midpoint filter (3*3)');
J3 = (ordfilt2(J1,1,ones(5,5), 'symmetric')+ordfilt2(J1,25,ones(5,5), 'symmetric'))/2;
subplot(224);imshow(J3); title('salt & pepper Noise with midpoint filter (5*5)');


mean = 0.0;
std = 0.1;
gaussian_noise = mean + std*randn(m,n);
J1 = I + gaussian_noise;
figure;
subplot(221);imshow(I);title('Original image');
subplot(222);imshow(J1); title('Gaussian Noise image');

J2 = (ordfilt2(J1,1,ones(3,3), 'symmetric')+ordfilt2(J1,9,ones(3,3), 'symmetric'))/2;
subplot(223);imshow(J2); title('Gaussian Noise with midpoint filter (3*3)');
J3 = (ordfilt2(J1,1,ones(5,5), 'symmetric')+ordfilt2(J1,25,ones(5,5), 'symmetric'))/2;
subplot(224);imshow(J3); title('Gaussian Noise with midpoint filter (5*5)');



%% alphatrim mean filter (page 57 in lecture note 5)
J1 = imnoise(I,'salt & pepper', 0.2);
figure;
subplot(221);imshow(I); title('Original image');
subplot(222);imshow(J1); title('Noise image');

m=3;n=3;
d=2;

f = imfilter(J1, ones(m, n), 'symmetric');
for k = 1:d/2
   f = imsubtract(f, ordfilt2(J1, k, ones(m, n), 'symmetric'));
end
for k = (m*n - (d/2) + 1):m*n
   f = imsubtract(f, ordfilt2(J1, k, ones(m, n), 'symmetric'));
end
f = f / (m*n - d);
subplot(223);imshow(f); title('alpha trimmed mean filter with d=2')

d=4;
f = imfilter(J1, ones(m, n), 'symmetric');
for k = 1:d/2
   f = imsubtract(f, ordfilt2(J1, k, ones(m, n), 'symmetric'));
end
for k = (m*n - (d/2) + 1):m*n
   f = imsubtract(f, ordfilt2(J1, k, ones(m, n), 'symmetric'));
end
f = f / (m*n - d);
subplot(224);imshow(f); title('alpha trimmed mean filter with d=4')


%% adaptive filter (page 63 in lecture note 5)
J1 = imnoise(I,'salt & pepper', 0.2);
figure;
subplot(221);imshow(I); title('Original image');
subplot(222);imshow(J1); title('Noise image');

J2 = wiener2(I,[3 3]);
J3 = wiener2(I,[5 5]);
subplot(223);imshow(J2); title('Adaptive filter with 3*3');
subplot(224);imshow(J3); title('Adaptive filter with 7*7');
