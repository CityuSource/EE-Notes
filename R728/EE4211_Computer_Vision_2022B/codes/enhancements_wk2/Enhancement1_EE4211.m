%% Negative tranform %2A
clc;
clear all;
I=imread('Fig0304(a)(breast_digital_Xray).tif');
I_new=255-I;
figure;
subplot(1,2,1);imshow(I); title('original')
subplot(1,2,2);imshow(I_new);title('Image with negative transform');


%% gamar transform with gamma<1 %2A
I=imread('Fig0308(a)(fractured_spine).tif');
gamma1=0.6;
gamma2=0.3;
gamma3=0.4;

I_new1=imadjust(I,[],[],gamma1);% help imadjust to find the meaning of this inner function
I_new2=imadjust(I,[],[],gamma2);
I_new3=imadjust(I,[],[],gamma3);

figure;
subplot(2,2,1);imshow(I);title('original');
subplot(2,2,2);imshow(I_new1);title('gamma=0.6');
subplot(2,2,3);imshow(I_new2);title('gamma=0.3');
subplot(2,2,4);imshow(I_new3);title('gamma=0.4');


%% gamar transform with gamma>1 %2A
clc
clear
I=imread('aerial.tif');

gamma1=3;
gamma2=4;
gamma3=5;

I_new1=imadjust(I,[],[],3);
I_new2=imadjust(I,[],[],4);
I_new3=imadjust(I,[],[],5);


figure;
subplot(2,2,1);imshow(I);title('original');
subplot(2,2,2);imshow(I_new1);title('gamma=3');
subplot(2,2,3);imshow(I_new2);title('gamma=4');
subplot(2,2,4);imshow(I_new3);title('gamma=5');


%% Contrast streching examples %2A_PP22
figure;
r1 = 100; s1 = 40;
r2 = 141; s2 = 216; 
a = (s1/r1); 
b = ((s2-s1)/ (r2-r1)); 
c = ((255-s2)/ (255-r2)); 
k = 0:r1; 
y1 = a*k; 
plot (k,y1); hold on;
 
k = r1: r2; 
y2 = b*(k - r1) + a*r1; 
plot (k,y2);
 
k = r2+1:255; 
y3 = c*(k-r2) + b*(r2-r1)+a*r1; 
plot (k,y3);

xlim([0 255]); 
ylim([0 255]);
xlabel('input gray level, r'); 
ylabel('outphut gray level, s');
title('Form of transformation');
 


f = imread('Fig3.10(b).tif');
[m, n] = size (f);
for i = 1:m
    for j = 1:n
        if((f(i,j)>=0) & (f(i,j)<=r1))
            g(i,j) = a*f(i,j);
        else
            if((f(i,j)>r1) & (f(i,j)<=r2))
                g(i,j) = ((b*(f(i,j)-r1)+(a*r1)));
            else
                if((f(i,j)>r2) & (f(i,j)<=255))
                    g(i,j) = ((c*(f(i,j)-r2)+(b*(r2-r1)+(a*r1))));
                end
            end
        end
    end
end
figure;
subplot(1,2,1),imshow(f); title('orginial image');
subplot(1,2,2),imshow(g); title('Image with Contrast streching');


%% Intensity level slicing examples %2A_PP24
img1 = imread('kidney.tif');
imshow(img1)
img2 = img1;
img3 = img1;
% Binary Gray-level Slicing Transform
x = 0:255;
y1 = 10*ones(size(x));
y1(128:240) = 200;
img2(find(img1>=128 & img1<=240)) = 200;
img2(find(img1<128)) = 10;
img2(find(img1>240)) = 10;

% Linear Gray-level Slicing Transform

y2 = x;
y2(100:130) = 200;
img3(find(img1>=128 & img1<=240)) = 200; 

figure;
subplot(2,2,1); plot(x,y1); title('Binary Gray-level Slicing Transform');
axis([0 255 0 255]); xlabel('Input Gray Level, r');
ylabel('Output Gray Level, s');

subplot(2,2,2); plot(x,y2); title('Linear Gray-level Slicing Transform');
axis([0 255 0 255]); xlabel('Input Gray Level, r');
ylabel('Output Gray Level, s');

subplot(2,2,3); imshow(img2); title('Original Aerial Road Image');
subplot(2,2,4); imshow(img3); title('Binary Gray-level Sliced Image');


%% Plot image histogram %2A_PP30
I1=imread('hist1.tif');
I2=imread('hist2.tif');
I3=imread('hist3.tif');
I4=imread('hist4.tif');

figure;
subplot(4,2,1);imshow(I1);
subplot(4,2,2);plot(imhist(I1));
subplot(4,2,3);imshow(I2);
subplot(4,2,4);plot(imhist(I2));

subplot(4,2,5);imshow(I3);
subplot(4,2,6);plot(imhist(I3));
subplot(4,2,7);imshow(I4);
subplot(4,2,8);plot(imhist(I4));


%% hist equalization %2A_PP37
I1=imread('hist1.tif');
I2=imread('hist2.tif');
I3=imread('hist3.tif');
I4=imread('hist4.tif');

I_new1=histeq(I1);
I_new2=histeq(I2);
I_new3=histeq(I3);
I_new4=histeq(I4);

figure;
subplot(4,4,1);imshow(I1);
subplot(4,4,2);plot(imhist(I1));
subplot(4,4,3);imshow(I_new1);
subplot(4,4,4);plot(imhist(I_new1));

subplot(4,4,5);imshow(I2);
subplot(4,4,6);plot(imhist(I2));
subplot(4,4,7);imshow(I_new2);
subplot(4,4,8);plot(imhist(I_new2));

subplot(4,4,9);imshow(I3);
subplot(4,4,10);plot(imhist(I3));
subplot(4,4,11);imshow(I_new3);
subplot(4,4,12);plot(imhist(I_new3));

subplot(4,4,13);imshow(I4);
subplot(4,4,14);plot(imhist(I4));
subplot(4,4,15);imshow(I_new4);
subplot(4,4,16);plot(imhist(I_new4));


%% local hist equalization %2A_PP42
img=imread('square.tif');
clipLimit = 0.2;
numTiles = [7 7];
I_new=histeq(img);
imgLocHistEq = adapthisteq(img, 'ClipLimit', clipLimit, 'NumTiles', numTiles);
figure;
subplot(1,3,1); imshow(img); title('original');
subplot(1,3,2); imshow(I_new); title('After Global Histogram Equalization ');
subplot(1,3,3); imshow(imgLocHistEq); title('After Adaptive Histogram Equalization');

 