%% ini
clc;
clear;
close all;

%% q1
image  = imread('1.tif');

%% Sobel filter
image_sb = edge(image,'sobel',0.15);

%% Hough transform
[H, T, R] = hough(image_sb);

%% Subplot
figure;
subplot(1, 4, 1), imshow(image), title('Orginal');
subplot(1, 4, 2), imshow(image_sb), title('Image after sobel filter');

%% Hough transform with largest two points
subplot(1, 4, 3), imshow(H, [], 'XData', T, 'YData', R, 'InitialMagnification', 'fit'),
xlabel('\theta'), ylabel('\rho'), title('Hough transform with largest two points'), axis on, axis square;
hold on; 

% Highlight largest two points
peak = houghpeaks(H, 2);
x = T(peak(:,2)); 
y = R(peak(:,1));
plot(x, y, 's', 'color', 'white');
lines = houghlines(image_sb, T, R, peak);

%% Detected two lines in the original images
subplot(1,4,4), imshow(image), title('Detected two lines');
hold on;

% Highlight detected two lines
for k = 1:length(lines)
    xy = [lines(k).point1; lines(k).point2];
    plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
    plot(xy(1,1),xy(1,2),'x','LineWidth',2,'Color','yellow');
    plot(xy(2,1),xy(2,2),'x','LineWidth',2,'Color','red');
end