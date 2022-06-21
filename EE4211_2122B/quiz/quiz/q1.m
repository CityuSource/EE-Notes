%% ini
clc;
clear;
close all;

%% q1
image = imread('1.jpg');

sq2 = -(sqrt(2));
filter1 = [-1, 0, 1; sq2,0,sq2; -1,0,1];
filter2 = [-1, -1, -1; 0,0,0; 1,1,1];

%% q1a
g1a = imfilter(double(image), filter1);
g1a = g1a >= 0.2;

figure;
subplot(1,4,1); imshow(image); title('original image');
subplot(1,4,2); imshow(g1a); title('gradient magnitude');

% Hough transform
[H,T,R] = hough(g1a);
subplot(1,4,3);
imshow(H,[],'XData',T,'YData',R,'InitialMagnification','fit');
xlabel('\theta'), ylabel('\rho');title('Hough transform');
axis on,axis square,hold on; 

% Identify four large points
P  = houghpeaks(H,2);
x = T(P(:,2)); 
y = R(P(:,1));
plot(x,y,'s','color','white');

% Identify lines
lines=houghlines(g1a,T,R,P);
subplot(1,4,4);
imshow(image), title('Image After Hough transform');hold on;
for k = 1:length(lines)
    xy = [lines(k).point1; lines(k).point2];
    plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
    plot(xy(1,1),xy(1,2),'x','LineWidth',2,'Color','yellow');
    plot(xy(2,1),xy(2,2),'x','LineWidth',2,'Color','red');
end

%% q1b
g1b = imfilter(double(image),filter2);
g1b = g1b >= 0.2;

figure;
subplot(1,4,1); imshow(image); title('Original');
subplot(1,4,2); imshow(g1b); title('Convolution mask b)');

% Hough transform
[H,T,R] = hough(g1b);
subplot(1,4,3);
imshow(H,[],'XData',T,'YData',R,'InitialMagnification','fit');
xlabel('\theta'), ylabel('\rho');title('Hough transform');
axis on,axis square,hold on; 

% Identify large points
P  = houghpeaks(H,2);
x = T(P(:,2)); 
y = R(P(:,1));
plot(x,y,'s','color','white');

% To identify lines
lines = houghlines(g1b,T,R,P);
subplot(1,4,4);
imshow(image), title('Image After Hough transform');hold on;
for k = 1:length(lines)
    xy = [lines(k).point1; lines(k).point2];
    plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
    plot(xy(1,1),xy(1,2),'x','LineWidth',2,'Color','yellow');
    plot(xy(2,1),xy(2,2),'x','LineWidth',2,'Color','red');
end
