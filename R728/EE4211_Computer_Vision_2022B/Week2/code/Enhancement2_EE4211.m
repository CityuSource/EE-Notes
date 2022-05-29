%% avarage filter
clc;
clear;
close all;
f = imread('plate1.tif'); %2B_PP12
w3 = 1/ (3. ^2)*ones (3); 
g3 = imfilter (f, w3); 
w5 = 1/ (5. ^2)*ones (5);
g5 = imfilter (f, w5); 
w9 = 1/ (9. ^2)*ones (9); 
g9 = imfilter (f, w9); 
w15 = 1/ (15. ^2)*ones (15); 
g15 = imfilter (f, w15); 
w35 = 1/ (35. ^2)*ones (35); 
g35 = imfilter(f, w35);

figure;
subplot(3,2,1);imshow(f);title('Original Image');
subplot(3,2,2);imshow(g3);title('Image with 3*3 filter');
subplot(3,2,3);imshow(g5);title('Image with 5*5 filter');
subplot(3,2,4);imshow(g9);title('Image with 9*9 filter');
subplot(3,2,5);imshow(g15);title('Image with 15*15 filter');
subplot(3,2,6);imshow(g35);title('Image with 35*35 filter');
%% weighted smooth filter for smooth %2B_PP15
f=imread('lena.bmp');
g5 = 1/ (5. ^2)*ones (5);
w5=1/25*[0,0,1,0,0;0,2,2,2,0;1,2,5,2,1;0,2,2,2,0;0,0,1,0,0];

f_g5=imfilter(f,g5);
f_w5=imfilter(f,w5);
figure;
subplot(1,3,1);imshow(f);title('Original image')
subplot(1,3,2);imshow(uint8(f_g5));title('Image with smooth')
subplot(1,3,3);imshow(uint8(f_w5));title('image with weighted')


%% weighted smooth filter for noise removing %2B_PP16
f=imread('plate1.tif');
fn = imnoise(f,'salt & pepper', 0.1);
g3 = 1/ (3. ^2)*ones (3);
w3=1/16*[1,2,1;2,4,2;1,2,1];

f_g3=imfilter(fn,g3);
f_w3=imfilter(fn,w3);
figure;
subplot(2,2,1);imshow(f);title('Original image')
subplot(2,2,2);imshow(fn);title('Noisy image')
subplot(2,2,3);imshow(uint8(f_g3));title('Image with smooth')
subplot(2,2,4);imshow(uint8(f_w3));title('image with weighted')


%% median filter %2B_PP19
f = imread('plate1.tif');
fn=imnoise(f,'salt & pepper',0.2);
g3 = medfilt2(fn,[3,3]);
g5 = medfilt2(fn,[5,5]); 
figure
subplot(2,2,1);imshow(f);title('Original image')
subplot(2,2,2);imshow(fn);title('Noise image')
subplot(2,2,3);imshow(g3);title('Image with median [3,3]')
subplot(2,2,4);imshow(g5);title('Image with median [5,5]')

%% median filter VS average  %2B_PP20
f = imread('plate1.tif');
fn=imnoise(f,'salt & pepper',0.2);
w3 = 1/(3.^2)*ones(3);
g3 = imfilter(fn, w3); 
g = medfilt2(fn); 
figure;
subplot(2,2,1);imshow(f);title('Original image')
subplot(2,2,2);imshow(fn);title('Noise image')
subplot(2,2,3);imshow(g3);title('Image with average')
subplot(2,2,4);imshow(g);title('Image with median')

%% laplacian  %2B_PP32
f1 = imread('moon.tif');
w4 = fspecial('laplacian', 0);
g1 = imfilter(f1, w4);
f2 = im2double(f1);
g2 = imfilter(f2, w4);
g3 = imsubtract(f2,g2);
g4 = imadd(f2,g2);
figure;
subplot(2,2,1);imshow(f1);
subplot(2,2,2);imshow(g1, [ ]);
subplot(2,2,3);imshow(g2, [ ]); 
subplot(2,2,4);imshow(g3);
figure;
subplot(2,1,1);imshow(g3);
subplot(2,1,2);imshow(g4);
%% simplifed laplacian  %2B_PP37
% Laplacian simplication
 
f1 = imread ('edge.tif');
w5 = [0 -1 0; -1 5 -1; 0 -1 0];
g1 = imfilter (f1, w5);
w9 = [-1 -1 -1; -1 9 -1; -1 -1 -1];
g2 = imfilter (f1, w9);
figure;
subplot(1,3,1);imshow(f1);title('Original image')
subplot(1,3,2);imshow(g1);title('Image with laplacian')
subplot(1,3,3);imshow(g2);title('Image with 2nd laplacian')

%% sobel transform  %2B_PP42
f1 = imread('circle.tif');
w = fspecial('sobel');
g1 = imfilter(f1, w);
figure;
subplot(1,2,1);imshow(f1); title('Orginal');
subplot(1,2,2);imshow(g1);title('Image with sobel');


 