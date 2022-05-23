clc;
clear;
close all;

I= imread("3.tif");

I(130:140,300:340,:) = 255;

lpgauss = imgaussflpf(I,30);
hpgauss = 1 - lpgauss;

lpI1 = imfreqfilt(I,lpgauss);
hpI1 = imfreqfilt(lpI1,hpgauss);

hpI2 = imfreqfilt(I,hpgauss);
lpI2 = imfreqfilt(hpI2,lpgauss);

figure;
subplot(2, 3, 1);
imshow(I); title("Original"); hold on;
subplot(2, 3, 2);
imshow(lpI1); title("Gauss LP"); hold on;
subplot(2, 3, 3);
imshow(hpI1); title("Gauss HP"); hold on;
subplot(2, 3, 4);
imshow(I); title("Original"); hold on;
subplot(2, 3, 5);
imshow(hpI2); title("Gauss HP"); hold on;
subplot(2, 3, 6);
imshow(lpI2); title("Gauss LP"); hold on;

function ff=imgaussflpf(I,sigma)
[M,N]=size(I);
 ff=ones(M,N);
 for i=1:M
     for j=1:N
         ff(i,j)= exp( -((i-M/2)^2+(j-N/2)^2) /2/(sigma^2) );        
     end
 end
end

function out=imfreqfilt(I,ff)
 
%FFT
I1=fft2(I);
I1=fftshift(I1); % 
 
%apply filter
G=I1.*ff;  % I(u,v)H(u,v)
% spectrum=log(1+abs(G));

G=ifftshift(G); %shift
out=ifft2(G); % IFFT

end