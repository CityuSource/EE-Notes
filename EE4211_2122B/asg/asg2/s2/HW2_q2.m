clc;
clear;
close all;

q2 = imread("2.tif");
q2d = im2double(q2);

%% Show original image
figure;
subplot(2, 4, 1);
imshow(q2); title("Original"); hold on;

%% Applying butterworth low pass filtering
D1 = 20;
ff = imbtwflpf(q2,D1);
btlp = imfreqfilt(q2,ff);
subplot(2,4,2);
imshow(mat2gray(abs(btlp)));
title("Butterworth Low-pass filter with D=20"); hold on;

%% Apply laplacian filtering in spatial domain
lpf = fspecial('laplacian',0);
temp = imfilter(q2d,lpf);
lpq2 = imsubtract(q2d,temp);
subplot(2,4,3);
imshow(lpq2);
title("Laplacian filter in spatial"); hold on;

%% Applying light salt noise
p_salt = 0.01;
[M N] = size(q2d);
tmp_mask = rand(M, N);
salt = find(tmp_mask <= p_salt);
saltedq2 = q2d;
saltedq2(salt) = 1;

subplot(2,4,4);
imshow(saltedq2);
title("Salted Image"); hold on;

%% Apply weighted mean filtering on the salted image
weight_mask = 1/25*[0,0,1,0,0;0,2,2,2,0;1,2,5,2,1;0,2,2,2,0;0,0,1,0,0];
unsaltedq2w = imfilter(saltedq2,weight_mask);

subplot(2,4,5);
imshow(unsaltedq2w);
title("Unsalted w/ weighted mean"); hold on;

%% Apply median filtering on the salted image
unsaltedq2m = medfilt2(saltedq2,[3,3]);

subplot(2,4,6);
imshow(unsaltedq2m);
title("Unsalted w/ 3x3 median filtering"); hold on;

%% Functions defined for butterworth filtering
function ff=imbtwflpf(I,D0)
[M,N]=size(I);
n=2;
 ff=ones(M,N);
 for i=1:M
     for j=1:N
         dist=sqrt((i-M/2)^2 + (j-N/2)^2);
         ff(i,j)= ( 1 + (dist/D0)^(2*n))^(-1);       
     end
 end
end

function out=imfreqfilt(I,ff)
I1=fft2(I);
I1=fftshift(I1); 
 
G=I1.*ff; 

G=ifftshift(G);
out=ifft2(G)
end
 