%% phase and magnitute Lecture 3A_page 23
clc;  
clear;
close all; 
I1=imread('rectangle.tif'); 
F1=fft2(I1);
F2=fftshift(F1);

S1=abs(F1);
S2=abs(F2);
S3= log(1+ abs(F2)); 

figure;
subplot(2,2,1);imshow(I1);title('Rectangle');
subplot(2,2,2);imshow(S1,[]);title('Fourier Spectrum');
subplot(2,2,3);imshow(S2,[]);title('Centered Spectrum');
subplot(2,2,4); imshow(S3,[]); title('Enhance Spectrum');


%% translation and rotation Lecture 3A_page 25
I1=imread('rectangle.tif');
figure;
subplot(3,4,1);imshow(I1);title('rectangle');
 
I2=fft2(I1);
spectrum =fftshift(I2);
temp= log(1+ abs(spectrum) ); 
phase=angle(I2);
subplot(3,4,5);imshow(temp,[]);title('FFT');
subplot(3,4,9);imshow(phase,[]);title('phase');

se=translate(strel(1),[300 300]);
T1=imdilate(I1,se);
subplot(3,4,2);imshow(T1);title('rectangle translate');

I2=fft2(T1);
spectrum =fftshift(I2);
temp= log(1+ abs(spectrum) ); 
phase=angle(I2);
subplot(3,4,6);imshow(temp,[]);title('FFT');
subplot(3,4,10);imshow(phase,[]);title('phase');
 
% R1 = imrotate(I1,-90,'bilinear','crop');
R1 = imrotate(I1,-90);
subplot(3,4,3);imshow(R1);title('rectangle rotate 90 degree');
 
I2=fft2(R1);
spectrum =fftshift(I2);
temp= log(1+ abs(spectrum) ); 
phase=angle(I2);

subplot(3,4,7); imshow(temp,[]);title('FFT')
subplot(3,4,11);imshow(phase,[]);title('phase');

R1 = imrotate(I1,-45,'bilinear','crop');
subplot(3,4,4);imshow(R1);title('rectangle rotate 45 degree');
 
I2=fft2(R1);
spectrum =fftshift(I2);
temp= log(1+ abs(spectrum) ); 
phase=angle(I2);

subplot(3,4,8); imshow(temp,[]);title('FFT')
subplot(3,4,12);imshow(phase,[]);title('phase');



%% FFT  Lecture 3A_page 26
I1=imread('woman.tif');
figure;
subplot(2,2,1);imshow(I1);title('woman');
 
I2=fft2(I1);
spectrum =fftshift(I2);
temp= log(1+ abs(spectrum) ); 
subplot(2,2,2);imshow(temp,[]);title('FFT');
 
I1=imread('rectangle.tif');
subplot(2,2,3);imshow(I1);title('rectangle');
 
I2=fft2(I1);
spectrum =fftshift(I2);
temp= log(1+ abs(spectrum) ); 
subplot(2,2,4); imshow(temp,[]);title('FFT')

%% square and circle  Lecture 3A_page 27
I1=zeros(256,256);
I1(78:178,78:178)=1;

I2=zeros(256,256);
I2(118:138,118:138)=1;

[x,y]=meshgrid(-128:127,-128:127);
z=sqrt(x.^2+y.^2);
I3=(z<45);

I4=(z<15);
figure
subplot(2,4,1),imshow(I1,[]),title('square1'),
subplot(2,4,2),imshow(I2,[]),title('square2'),
subplot(2,4,3),imshow(I3,[]),title('circle1'),
subplot(2,4,4),imshow(I4,[]),title('circle2'),

subplot(2,4,5),imshow(log(abs(fftshift(fft2(I1)))+1),[]),title('Spectrum of square1'),
subplot(2,4,6),imshow(log(abs(fftshift(fft2(I2)))+1),[]),title('Spectrum of square2'),
subplot(2,4,7),imshow(log(abs(fftshift(fft2(I3)))+1),[]),title('Spectrum of circle1');
subplot(2,4,8),imshow(log(abs(fftshift(fft2(I4)))+1),[]),title('Spectrum of circle2');

%% direction  Lecture 3A_page 28
%black&white
Isize = 512;
Iblackwhite = zeros(Isize);
Iblackwhite(1:Isize/2,:) = 1;
figure;
subplot(2,4,1);imshow(Iblackwhite); title('image');
subplot(2,4,5);imshow(log(abs(fftshift(fft2(Iblackwhite)))+1));title('spectrum'); 
 
Iwhiteblack = zeros(Isize);
Iwhiteblack(:,Isize/2:end) = 1;
subplot(2,4,2);imshow(Iwhiteblack); title('image');
subplot(2,4,6);imshow(log(abs(fftshift(fft2(Iwhiteblack)))+1));title('spectrum');
 
% black&white triangle
Hanning = hann(Isize)*hann(Isize)';
ItriangleUpper = triu(ones(Isize),0);
ItriangleUpper = ItriangleUpper.*Hanning;
subplot(2,4,3);imshow(ItriangleUpper); title('image');
subplot(2,4,7);imshow(log(abs(fftshift(fft2(ItriangleUpper)))+1));title('spectrum');

% flip the upper triangle matrix
ItriangleUpperMirror = fliplr(triu(ones(Isize),0));
ItriangleUpperMirror = ItriangleUpperMirror.*Hanning;
subplot(2,4,4);imshow(ItriangleUpperMirror); title('image');
subplot(2,4,8);imshow(log(abs(fftshift(fft2(ItriangleUpperMirror)))+1));title('spectrum');

%% specturm and frequency Lecture 3A_page 29
% % % Length of signal
L = 512;             
% Sampling frequency
FsLow = 150; FsMid = 500; FsHigh = 1000;   
% Form sampling vectors
IndexLow = linspace(0,FsLow,L); 
IndexMid = linspace(0,FsMid,L); 
IndexHigh = linspace(0,FsHigh,L); 
 
% build 1D sinewave
SineLow = sin(IndexLow);
SineMid = sin(IndexMid);
SineHigh = sin(IndexHigh);
 
% translate 1D wave into 2D sinewave
SinewaveL = repmat(SineLow,[L,1]);
SinewaveM = repmat(SineMid,[L,1]);
SinewaveH = repmat(SineHigh,[L,1]);
 
% Window function
Window = hann(L)*hann(L)';
SinewaveLwindowed = SinewaveL.*Window;
SinewaveMwindowed = SinewaveM.*Window;
SinewaveHwindowed = SinewaveH.*Window;
figure;
subplot(2,3,1),imshow(SinewaveL,[]),title('Low-freq. sinewave'),
subplot(2,3,2),imshow(SinewaveM,[]),title('Med-freq. sinewave'),
subplot(2,3,3),imshow(SinewaveH,[]),title('Hig-freq. sinewave'),
subplot(2,3,4),imshow(log(abs(fftshift(fft2(SinewaveLwindowed)))+1),[]),title('Spectrum of Low-freq. sinewave'),
subplot(2,3,5),imshow(log(abs(fftshift(fft2(SinewaveMwindowed)))+1),[]),title('Spectrum of Med-freq. sinewave'),
subplot(2,3,6),imshow(log(abs(fftshift(fft2(SinewaveHwindowed)))+1),[]),title('Spectrum of Hig-freq. sinewave');

%% translation
I1=imread('rectangle.tif'); 
I2=fft2(I1);
spectrum =fftshift(I2);
temp1= log(1+ abs(spectrum) ); 
Phase1=angle(I2);

figure;
subplot(2,3,1);imshow(I1);title('Rectangle');
subplot(2,3,2);imshow(temp1,[]);title('Enhance Spectrum');
subplot(2,3,3);imshow(Phase1,[]);title('Phase');

se=translate(strel(1),[0 300]);
I1=imdilate(I1,se);
I2=fft2(I1);
spectrum =fftshift(I2);
temp2= log(1+ abs(spectrum) ); 
Phase2=angle(I2);

subplot(2,3,4);imshow(I1);title('Rectangle translate');
subplot(2,3,5);imshow(temp2,[]);title('Enhance Spectrum');
subplot(2,3,6);imshow(Phase2,[]);title('Phase');












