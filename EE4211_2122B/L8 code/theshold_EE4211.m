clc;
clear;
close all;
%% global threshold (page 17 of EE4211_8)
 f  = imread('2.tif');
 T=0.5*(double(min(f(:)))+double(max(f(:))));
 done=false;
 while ~done
     g=f>=T;
     Tnext=0.5*(mean(f(g))+mean(f(~g)));
     done=abs(T-Tnext)<0.5;
     T=Tnext;
 end
 figure;
 subplot(1,2,1);imshow(f);title('orginal image')
 subplot(1,2,2);imshow(g);title('Basic Global threshold')
 
%% optimum global thresholdostu method (Otsu's Method) (page 28 of EE4211_8)
f  = imread('2.tif');
T=graythresh(f);
T=T*255;
g=f>=T;
figure;
subplot(1,2,1);imshow(f);title('orginal image')
subplot(1,2,2);imshow(g);title('Optimum Global threshold')
% Reduce Noise By Smoothing (page 32 of EE4211_7)
f = im2double(imread('3.tif'));
T1 = graythresh(f);
g1 = (f>=T1);

average_filter = 1/ (5. ^2)*ones (5); 
J = imfilter(f, average_filter,'conv','replicate','same'); 
T2 = graythresh(J);
g2 = (J>=T2);

figure;
subplot(231); imshow(f); title('original noisy image');
subplot(232); imhist(f); title('histogram of noisy image');
subplot(233); imshow(g1); title('Result obtained using Otsu method');
subplot(234); imshow(J); title('Smoothed image');
subplot(235); imhist(J); title('histogram of smoothed image');
subplot(236); imshow(g2); title('Result obtained using Otsu method');

%% Reduce Noise By gradient information (page 34 of EE4211_8)
f = im2double(imread('4.tif'));
[Gmag, Gdir] = imgradient(f);
g1 = Gmag>=0.997;

image_d = f.*g1;
Nonzero_idx = (image_d>0.0);
T = graythresh(image_d(Nonzero_idx));
g2 = (f>=T);

figure;
subplot(231); imshow(f); title('original noisy image');
subplot(232); imhist(f); title('histogram of noisy image');
subplot(233); imshow(g1); title('Gradient magnitude image threshold at the 99.7 percentile');
subplot(234); imshow(image_d); title('product of (a) and (c)');
subplot(235); imhist(image_d(Nonzero_idx)); title('histogram of non-zero pixels');
subplot(236); imshow(g2); title('Result obtained using Otsu method in original image');
%% multiple thresholds (page 38 of EE4211_8)
f  = im2double(imread('5.tif'));
T = multithresh(f,10);
J = imquantize(f, T)/(length(T)+1);
figure;
subplot(131); imshow(f); title('original image');
subplot(132); imhist(f); title('histogram of original image');
subplot(133); imshow(J); title('result of multiple threshold');
%% image partitioning (page 41 of EE4211_8)
f  = im2double(imread('6.tif'));
[m n] = size(f);
%iterative global algorithm
T1=0.5*(double(min(f(:)))+double(max(f(:))));
done=false;
 while ~done
     g1 = f>=T1;
     Tnext=0.5*(mean(f(g1))+mean(f(~g1)));
     done=abs(T1-Tnext)<0.5;
     T1=Tnext;
 end
%Otsu's method
T2 = graythresh(f);
g2 = f>=T2;
% image partitioning
block_funtion = @(block_struct) (block_struct.data >= graythresh(block_struct.data));
g3 = blockproc(f,[m/2 n/3],block_funtion);

figure;
subplot(231); imshow(f); title('noisy, shaded image');
subplot(232); imhist(f); title('its histogram');
subplot(233); imshow(g1); title('result of iterative global algorithm');
subplot(234); imshow(g2); title('result of Otsu method');
subplot(235); imshow(f);line([0 n],[m/2 m/2]); line([n/3, n/3],[0, m]); line([2*n/3, 2*n/3],[0, m]);title('image divided into 6 subimages');
subplot(236); imshow(g3); title('applying Otsu method in each subimage');

%% region grow (page 51 of EE4211_8)
I= (im2double(imread('8.tif'))); 
figure; 
x=138; y=249; 
J = regiongrowing(I,x,y,0.05);
subplot(1,2,1);imshow(I);title('Original');
subplot(1,2,2);imshow(J);title('Result of region grow');
