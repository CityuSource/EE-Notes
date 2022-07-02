%% Point detection (Page 12 of EE4211_7)
close all;
clc;
clear;
f=imread('1.tif');
w=[-1,-1,-1;-1,8,-1;-1,-1,-1];
g=abs(imfilter(double(f),w));
T=0.1*max(g(:));
g=g>=T;
figure;
subplot(1,2,1);imshow(f);
subplot(1,2,2);imshow(g);

%% line detecion different direction (Page 14 of EE4211_7)
f=imread('2.tif');
w1=[-1 -1 -1;2 2 2; -1 -1 -1];
%w1=[-1 -1 -1;0 0 0; 1 1 1];
g1=imfilter(double(f),w1);

w2=[2 -1 -1;-1 2 -1; -1 -1 2];
g2=imfilter(double(f),w2);

w3=[-1 2 -1;-1 2 -1; -1 2 -1];
g3=imfilter(double(f),w3);

w4=[-1 -1 2;-1 2 -1; 2 -1 -1];
g4=imfilter(double(f),w4);

figure;
subplot(2,3,1);imshow(f);title('original');
subplot(2,3,2);imshow(g1);title('(a)Horizontal');
subplot(2,3,3);imshow(g2);title('(b)-45 degree');
subplot(2,3,5);imshow(g3);title('(c)Vertical')
subplot(2,3,6);imshow(g4);title('(d)+45 degree')

%% edge detection with sobel (Page 27 of EE4211_7)
f = imread('3.tif');
g_1 = edge(f,'sobel');
g_2= edge(f,'sobel',0.15,'vertical');
g_3 = edge(f,'sobel',0.15);
w=[-2 -1 0;-1 0 1;0 1 2];
g_4=imfilter(double(f),w,'replicate');
T=0.3*max(abs(g_4(:)));
g_4=g_4>=T;

w1=[0 1 2;-1 0 1;-2 -1 0];
g_5=imfilter(double(f),w1,'replicate');
T=0.3*max(abs(g_5(:)));
g_5=g_5>=T;

figure
subplot(2,3,1);imshow(f),title('a) Original');
subplot(2,3,2);imshow(g_1),title('b) sobel with automated threshold');
subplot(2,3,3);imshow(g_2),title('c) sobel with defined vertical threshold');
subplot(2,3,4);imshow(g_3),title('d) sobel with defined threshold');
subplot(2,3,5);imshow(g_4),title('e) sobel with 45 degree, threshold');
subplot(2,3,6);imshow(g_5),title('f) sobel with -45 degree, threshold');
%% edge detection with log (Page 34 of EE4211_7)

f = imread('3.tif');
[g_log_default,tlog] = edge(f,'log');

g_log_1 = edge(f,'log',0.02,1);%0.02 means threshold, 1 means sigma
g_log_2 = edge(f,'log',0.02,1.7);
figure;
subplot(2,2,1);imshow(f);title('Original image');
subplot(2,2,2);imshow(g_log_default);title('default log');
subplot(2,2,3);imshow(g_log_1);title('with sigma=1');
subplot(2,2,4);imshow(g_log_2);title('with sigma=1.7');

%% edge detection with canny (Page 41 of EE4211_7)
f = imread('3.tif');
[g_canny_default,tlog] = edge(f,'canny');

g_canny_1 = edge(f,'canny',0.2,1.2);%0.2 means threshold
g_canny_2 = edge(f,'canny',0.2,4);
figure
subplot(2,2,1);imshow(f);title('Original image');
subplot(2,2,2);imshow(g_canny_default);title('default canny');
subplot(2,2,3);imshow(g_canny_1);title('with sigma=1.2');
subplot(2,2,4);imshow(g_canny_2);title('with sigma=4');


%% example for hough transform (Page 55 of EE 4211_7)
f=zeros(101,101);
f(1,1)=1;
f(101,1)=1;
f(1,101)=1;
f(101,101)=1;
f(51,51)=1;
[H,T,R]=hough(f);
figure;
subplot(1,2,1);imshow(f);title('orginal image');axis on;axis square;
subplot(1,2,2);imshow(H,[],'XData',T,'YData',R,'InitialMagnification','fit');title('hough transform');%hough transformation
axis on,axis square;




%% hough tranform for images (Page 56 of EE 4211_7)
I  = imread('6.tif');
figure;
subplot(1,3,1);
imshow(I); title('Orginal');
BW = edge(I,'log');%log detect boundary
[H,T,R] = hough(BW);%H hough tranform matrix,I,R angle and radius
subplot(1,3,2);
imshow(H,[],'XData',T,'YData',R,'InitialMagnification','fit');%hough transform
xlabel('\theta'), ylabel('\rho');title('Hough transform');
axis on,axis square,hold on; 
P  = houghpeaks(H,2);
x = T(P(:,2)); 
y = R(P(:,1));
plot(x,y,'s','color','white');
lines=houghlines(BW,T,R,P);
subplot(1,3,3);
imshow(I), title('Image After Hough transform');hold on;
for k = 1:length(lines)
xy = [lines(k).point1; lines(k).point2];
 plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
plot(xy(1,1),xy(1,2),'x','LineWidth',2,'Color','yellow');
plot(xy(2,1),xy(2,2),'x','LineWidth',2,'Color','red');
 end

