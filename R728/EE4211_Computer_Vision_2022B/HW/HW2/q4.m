%% ini
clc;
clear;
close all;

%% q3
image = imread('3.tif');

sigma = 30;
image_glp = imgaussflpf(image, sigma);
image_glp = imfreqfilt(image, image_glp);

image_glhp = imgaussflpf(image_glp, sigma);
image_glhp = 1 - image_glhp;
image_glhp = imfreqfilt(image_glp, image_glhp);

image_ghp = imgaussflpf(image, sigma);
image_ghp = 1 - image_ghp;
image_ghp = imfreqfilt(image, image_ghp);

image_ghlp = imgaussflpf(image_ghp, sigma);
image_ghlp = imfreqfilt(image_ghp, image_ghlp);

figure;
subplot(2,3,1), imshow(image), title('original');
subplot(2,3,2), imshow(image_glp), title('after low pass');
subplot(2,3,3), imshow(image_glhp), title('after high pass');
subplot(2,3,4), imshow(image), title('original');
subplot(2,3,5), imshow(image_ghp), title('after high pass');
subplot(2,3,6), imshow(image_ghlp), title('after low pass');

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