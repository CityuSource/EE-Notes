%% 1
close all;
clear all;
clc;
I  = imread('1.tif');
figure;
subplot(1,4,1);
imshow(I); title('Orginal'); %(1 point)

BW = edge(I,'sobel',0.15);%canny detection;%(3 points)
subplot(1,4,2);
imshow(BW);title('Gradient magnitude');

[H,T,R] = hough(BW);%H hough tranform matrix,I,R angle and radius %(2 points)
subplot(1,4,3);
imshow(H,[],'XData',T,'YData',R,'InitialMagnification','fit');%hough transform
xlabel('\theta'), ylabel('\rho');title('Hough transform');
axis on,axis square,hold on; 
P  = houghpeaks(H,2); %(2 points)
x = T(P(:,2)); 
y = R(P(:,1));
plot(x,y,'s','color','white');
lines=houghlines(BW,T,R,P);
subplot(1,4,4);
imshow(I), title('Image After Hough transform');hold on;
for k = 1:length(lines)
    xy = [lines(k).point1; lines(k).point2];
    plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
    plot(xy(1,1),xy(1,2),'x','LineWidth',2,'Color','yellow');
    plot(xy(2,1),xy(2,2),'x','LineWidth',2,'Color','red');
end % rest for 2 points