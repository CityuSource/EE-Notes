clc;
clear;close all;
I=imread('2.tif');% 1 point by loading images
[m, n] = size(I);
%% question 2 (2)
%butterworth low pass filtering
ff1=imbtwflpf(I,20);
out1=imfreqfilt(I,ff1);
out1 = uint8(abs(out1));
% laplacian filtering
ff2 = fspecial('laplacian', 0);
out= imfilter(I, ff2);
out2 = imsubtract(I,out);
out2=uint8(out2);

figure;
subplot(1,3,1);imshow(mat2gray(abs(I)));title('Original');
subplot(1,3,2);imshow(out1,[]);title('image after butterworth low pass filtering');
subplot(1,3,3);imshow(out2,[]);title('image with laplacian filtering');

%% question 2 (3)
I=im2double(I);
tmp_mask = rand(m,n);
salt_idx = find(tmp_mask <= 0.1);
J1 = I;
J1(salt_idx) = 1;

% using 3x3 Contraharmonic Filter with parameter Q = -1.5 to process J1
J2 = Contraharmonic_Filter(J1, [3,3], -5);

% using 3x3 Min filter to process J1
J3 = ordfilt2(J1,1,ones(3,3), 'symmetric');
figure;
subplot(221);imshow(I);title('original image(I)')
subplot(222);imshow(J1);title('original image + salt noise (J1)')
subplot(223);imshow(J2);title('Contraharmonic Filtered J1')
subplot(224);imshow(J3);title('3x3 Min filtered J1')
