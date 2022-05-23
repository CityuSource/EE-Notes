%% 1
close all;
clear all;
clc;
I  = imread('1.tif');% read image_1 mark
figure;
subplot(1,4,1);
imshow(I); title('Orginal');

%%
BW = edge(I,'sobel',0.15);
subplot(1,4,2);
imshow(BW);title('Gradient magnitude');
%%
[H,T,R] = hough(BW);%hough tranform matrix,I,R angle and radius_2 marks
subplot(1,4,3);
imshow(H,[],'XData',T,'YData',R,'InitialMagnification','fit');%hough transform
xlabel('\theta'), ylabel('\rho');title('Hough transform');
axis on,axis square,hold on; 
P  = houghpeaks(H,2);%to identify four large points_2 marks
x = T(P(:,2)); 
y = R(P(:,1));
plot(x,y,'s','color','white');
%%
lines=houghlines(BW,T,R,P);%to identify four lines_2 marks
subplot(1,4,4);
imshow(I), title('Image After Hough transform');hold on; %show the results_1 mark
for k = 1:length(lines)
xy = [lines(k).point1; lines(k).point2];
 plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
plot(xy(1,1),xy(1,2),'x','LineWidth',2,'Color','yellow');
plot(xy(2,1),xy(2,2),'x','LineWidth',2,'Color','red');
 end