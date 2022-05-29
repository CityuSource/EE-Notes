%% ideal low filter Lecture 3B_page 13
clc;
clear;
close all;
I=imread('test1.tif');
ff=imidealflpf(I,20);
out=imfreqfilt(I,ff);
ff1=imidealflpf(I,40);
out1=imfreqfilt(I,ff1);
ff2=imidealflpf(I,60);
out2=imfreqfilt(I,ff2);
 
figure;
subplot(2,4,1);imshow(mat2gray(abs(I)));title('Original ');
subplot(2,4,2);imshow(mat2gray(abs(out)));title('Image after f=20');
subplot(2,4,3);imshow(mat2gray(abs(out1)));title('Image after f=40');
subplot(2,4,4);imshow(mat2gray(abs(out2)));title('Image after f=60');
 
 
%show specturm (fft--fftshift--abs--log)
If=fft2(I);
If=fftshift(If);
If=abs(If);   
If=log(1+If); 
 
outf=fft2(out);
outf=fftshift(outf);
outf=abs(outf);   
outf=log(1+outf); 
 
out1f=fft2(out1);
out1f=fftshift(out1f);
out1f=abs(out1f);   
out1f=log(1+out1f); 
 
out2f=fft2(out2);
out2f=fftshift(out2f);
out2f=abs(out2f);  
out2f=log(1+out2f);

subplot(2,4,5);imshow(If,[]);title('Specturm');
subplot(2,4,6);imshow(outf,[]);title('Specturm f=20');
subplot(2,4,7);imshow(out1f,[]);title('Specturm f=40');
subplot(2,4,8);imshow(out2f,[]);title('Specturm f=60');






%% btw low pass Lecture 3B_page 17
I=imread('test1.tif');
D1=10;
D2=20;
D3=30;
ff=imbtwflpf(I,D1);
out=imfreqfilt(I,ff);
ff1=imbtwflpf(I,D2);
out1=imfreqfilt(I,ff1);
ff2=imbtwflpf(I,D3);
out2=imfreqfilt(I,ff2);
 figure;
subplot(2,4,1);imshow(I,[]);title('Original ');
subplot(2,4,2);imshow(mat2gray(abs(out)));title('Image after btw D0=10');
subplot(2,4,3);imshow(mat2gray(abs(out1)));title('Image after btw D1=20');
subplot(2,4,4);imshow(mat2gray(abs(out2)));title('Image after btw D2=30');
 
%show specturm (fft--fftshift--abs--log)
If=fft2(I);
If=fftshift(If);
If=abs(If);   
If=log(1+If); 
 
outf=fft2(out);
outf=fftshift(outf);
outf=abs(outf);   
outf=log(1+outf); 
 
out1f=fft2(out1);
out1f=fftshift(out1f);
out1f=abs(out1f);   
out1f=log(1+out1f); 
 
out2f=fft2(out2);
out2f=fftshift(out2f);
out2f=abs(out2f);  
out2f=log(1+out2f);

subplot(2,4,5);imshow(If,[]);title('Specturm');
subplot(2,4,6);imshow(outf,[]);title('Specturm btw D0=10');
subplot(2,4,7);imshow(out1f,[]);title('Specturm btw D1=20');
subplot(2,4,8);imshow(out2f,[]);title('Specturm btw D2=30');

%% ideal gauss low pass filter Lecture 3B_page 21
I=imread('test1.tif');
sigma1=10;
sigma2=20;
sigma3=30;
ff=imgaussflpf(I,sigma1);
out=imfreqfilt(I,ff);
ff1=imgaussflpf(I,sigma2);
out1=imfreqfilt(I,ff1);
ff2=imgaussflpf(I,sigma3);
out2=imfreqfilt(I,ff2);
 figure;
subplot(2,4,1);imshow(I,[]);title('Original ');
subplot(2,4,2);imshow(mat2gray(abs(out)));title('Image after gaussian sigma=10');
subplot(2,4,3);imshow(mat2gray(abs(out1)));title('Image after gaussian sigma=20');
subplot(2,4,4);imshow(mat2gray(abs(out2)));title('Image after gaussian sigma=30');
 
%show specturm (fft--fftshift--abs--log)
If=fft2(I);
If=fftshift(If);
If=abs(If);   
If=log(1+If); 
 
outf=fft2(out);
outf=fftshift(outf);
outf=abs(outf);   
outf=log(1+outf); 
 
out1f=fft2(out1);
out1f=fftshift(out1f);
out1f=abs(out1f);   
out1f=log(1+out1f); 
 
out2f=fft2(out2);
out2f=fftshift(out2f);
out2f=abs(out2f);  
out2f=log(1+out2f);

subplot(2,4,5);imshow(If,[]);title('Specturm');
subplot(2,4,6);imshow(outf,[]);title('Specturm gaussian sigma=10');
subplot(2,4,7);imshow(out1f,[]);title('Specturm gaussian sigma=20');
subplot(2,4,8);imshow(out2f,[]);title('Specturm gaussian sigma=30');


%% ideal high filter Lecture 3B_page 26
I=imread('test1.tif');
ff=imidealflpf(I,20);ff=1-ff;
out=imfreqfilt(I,ff);
ff1=imidealflpf(I,40);ff1=1-ff1;
out1=imfreqfilt(I,ff1);
ff2=imidealflpf(I,60);ff2=1-ff2;
out2=imfreqfilt(I,ff2);
 
figure;
subplot(2,4,1);imshow(mat2gray(abs(I)));title('Original ');
subplot(2,4,2);imshow(mat2gray(abs(out)));title('Image after f=20');
subplot(2,4,3);imshow(mat2gray(abs(out1)));title('Image after f=40');
subplot(2,4,4);imshow(mat2gray(abs(out2)));title('Image after f=60');
 
%show specturm (fft--fftshift--abs--log)
If=fft2(I);
If=fftshift(If);
If=abs(If);   
If=log(1+If); 
 
outf=fft2(out);
outf=fftshift(outf);
outf=abs(outf);   
outf=log(1+outf); 
 
out1f=fft2(out1);
out1f=fftshift(out1f);
out1f=abs(out1f);   
out1f=log(1+out1f); 
 
out2f=fft2(out2);
out2f=fftshift(out2f);
out2f=abs(out2f);  
out2f=log(1+out2f);

subplot(2,4,5);imshow(If,[]);title('Specturm');
subplot(2,4,6);imshow(outf,[]);title('Specturm f=20');
subplot(2,4,7);imshow(out1f,[]);title('Specturm f=40');
subplot(2,4,8);imshow(out2f,[]);title('Specturm f=60');

 
  

 
%% btw high filter Lecture 3B_page 27
I=imread('test1.tif');
sigma1=10;
sigma2=20;
sigma3=30;
ff=imbtwflpf(I,sigma1);ff=1-ff;
out=imfreqfilt(I,ff);
ff1=imbtwflpf(I,sigma2);ff1=1-ff1;
out1=imfreqfilt(I,ff1);
ff2=imbtwflpf(I,sigma3);ff2=1-ff2;
out2=imfreqfilt(I,ff2);
 figure;
subplot(1,4,1);imshow(I,[]);title('Original ');
subplot(1,4,2);imshow(mat2gray(abs(out)));title('Image after btw f=10');
subplot(1,4,3);imshow(mat2gray(abs(out1)));title('Image after btw f=20');
subplot(1,4,4);imshow(mat2gray(abs(out2)));title('Image after btw f=30');


%% gauss high filter Lecture 3B_page 28
clc;
clear;
I=imread('test1.tif');
sigma1=10;
sigma2=20;
sigma3=30;
ff=imgaussflpf(I,sigma1);ff=1-ff;
out=imfreqfilt(I,ff);
ff1=imgaussflpf(I,sigma2);ff1=1-ff1;
out1=imfreqfilt(I,ff1);
ff2=imgaussflpf(I,sigma3);ff2=1-ff2;
out2=imfreqfilt(I,ff2);
figure;
subplot(1,4,1);imshow(I);title('Original');
subplot(1,4,2);imshow(mat2gray(abs(out)));title('Image after sigma=10');
subplot(1,4,3);imshow(mat2gray(abs(out1)));title('Image after sigma=20');
subplot(1,4,4);imshow(mat2gray(abs(out2)));title('Image after sigma=30');



%% laplacian filter Lecture 3B_page 35
f1 = imread('blurry_moon.tif');
w4 = fspecial('laplacian', 0);
f2 = im2double(f1);
g2 = imfilter(f2, w4);
g3 = imsubtract(f2,g2);% for spatial domain

M=size(f1,1)*2;N=size(f1,2)*2;
u=-M/2:(M/2-1);  
v=-N/2:(N/2-1);  
[V,U]=meshgrid(v,u);  
D=(U.^2+V.^2);

% L=-4*pi^2*D;
L=-D;
pf=fftshift(fft2(f1,M,N));
g=real((ifft2(ifftshift(pf.*L))));
g=g(1:size(f1,1),1:size(f1,2));
g=g/max(g(:));
g3_f = imsubtract(f2,g); % for frequency domain

figure;
subplot(1,3,1);imshow(f1);title('original');
subplot(1,3,2);imshow(g3);title('Image with Laplacian in Spatial');
subplot(1,3,3);imshow(g3_f);title('Image with Laplacian in Frequency');

%% homomophic Lecture 3B_page 42
d=10;
order=2;
im=double(imread('PET_image.tif'));
[r, c]=size(im);
homofil(im,d,r,c,order);