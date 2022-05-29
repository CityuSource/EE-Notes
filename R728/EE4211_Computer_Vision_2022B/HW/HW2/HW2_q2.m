clc;
clear;
close all;

q2 = imread("2.tif");
q2d = im2double(q2);

%% Applying butterworth low pass filtering
D1 = 20;
ff = imbtwflpf(q2,D1);
btlp = imfreqfilt(q2,ff);

%% Apply laplacian filtering in spatial domain
lpf = fspecial('laplacian',0);
temp = imfilter(q2d,lpf);
lpq2 = imsubtract(q2d,temp);

figure;
subplot(1,3,1);
imshow(q2); title("Original"); hold on;
subplot(1,3,2);
imshow(mat2gray(abs(btlp)));
title("Butterworth Low-pass filter with D=20"); hold on;
subplot(1,3,3);
imshow(lpq2);
title("Laplacian filter in spatial"); hold on;
%% Applying light salt noise
p_salt = 0.01;
[M N] = size(q2d);
tmp_mask = rand(M, N);
salt = find(tmp_mask <= p_salt);
saltedq2 = q2d;
saltedq2(salt) = 1;

%% Apply contraharmonic mean filtering on the salted image with high negative Q
unsaltedq2w = Contraharmonic_Filter(saltedq2,[3,3],-3.5);

%% Apply median filtering on the salted image
unsaltedq2m = medfilt2(saltedq2,[3,3]);

figure;
subplot(1,4,1);
imshow(q2); title("Original"); hold on;
subplot(1,4,2);
imshow(saltedq2);
title("Salted Image"); hold on;
subplot(1,4,3);
imshow(unsaltedq2w);
title("Unsalted w/ contraharmonic mean filter"); hold on;
subplot(1,4,4);
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

%% Function defined for contraharmonic filter
function [output] = Contraharmonic_Filter(input, filter_size, Q)
% input : input image, double
% size: size of filter
% Q: calculation parameter
if length(filter_size)~=2
    error('filter needs two dimensions, row and column')
end

x = floor((filter_size(1) - 1) / 2);
y = floor((filter_size(2) - 1) / 2);

padding_img = padarray(input, [x,y], 'replicate'); % to keep the size of the output image
[m,n] = size(input);
output = zeros(size(input));
for i = 1+1 : 1+m
    for j = 1+1 : 1+n
        in_filter = padding_img(i-1 : i+1, j-1 : j+1);
        output(i-1, j-1) = sum(sum(in_filter .^ (Q + 1))) / sum(sum(in_filter .^ Q));
    end
end
end
 