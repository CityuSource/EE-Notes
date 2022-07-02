%% fft
clc;
clear;
close all; 

I = imread('ss1.png');
I = rgb2gray(I);

F=abs(fftshift(fft2(I)));
Fmin=min(min(F));
Fmax=max(max(F));
Flog = log(1 + F);

figure;
subplot(1,3,1);imshow(I);title('Rectangle');
subplot(1,3,2); imshow(Flog, []); title('Log Spectrum');
subplot(1,3,3); imshow(F, [1.5*Fmin, Fmax*0.02]); title('Enhance Spectrum');;

