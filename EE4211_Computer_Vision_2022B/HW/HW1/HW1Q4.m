%% read the image first
clc;  
clear;
close all; 
Image=imread('skeleton_orig.tif');
Image = im2double(Image);

%% processing

%% negative transform
Image_new=255-Image;

%% laplacian
w = fspecial('laplacian', 0);
laplus = imfilter(Image, w);

%% sobel transform  %2B_PP42
w = fspecial('sobel');
sobel = imfilter(Image, w);

%% first sharpen method by substracting original and laplacian
sharpen1 = imsubtract(Image,laplus);

%% average 5x5 on sobel imag
weight = 1/(5.^2)*ones(5);
average1 = imfilter(Image, weight);

%% weighted smoothing method
w5=1/15*[0,0,1,0,0;0,2,2,2,0;1,2,5,2,1;0,2,2,2,0;0,0,1,0,0];
smooth1=imfilter(Image,w5);

%% Product of sharpen1 and average1
product1 = immultiply(smooth1,average1);
product2 = immultiply(sharpen1,average1);

%% add original and product1 together
sum1 = imadd(Image,product1);
sum2 = imadd(Image,product2);

%% Imagencrease the gamma by 0.5
gamma_level = 0.5;
gamma1 = imadjust(sum1,[],[],gamma_level);
gamma2 = imadjust(sum2,[],[],gamma_level);

%%output
figure;
subplot(1,3,1);imshow(Image); title('original')
subplot(1,3,2);imshow(gamma1); title('Enhanced by smoothing')
subplot(1,3,3);imshow(gamma1); title('Enhanced by laplus sharpening')
% subplot(4,4,2);imshow(Image_new);title('Negative transform');
% subplot(4,4,3);imshow(laplus, [ ]); title('Laplacian filter')
% subplot(4,4,4);imshow(sobel);title('Sobel filter');
% subplot(4,4,5);imshow(sharpen1);title('Sharpen1');
% subplot(4,4,6);imshow(average1);title('Average1');
% subplot(4,4,6);imshow(product1);title('Sharpen1 and Average1 product');