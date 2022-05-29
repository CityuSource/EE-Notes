clc;
clear;
close all;

q1 = im2double(imread("1.tif"));

%% First show the original image
figure;
subplot(1, 4, 1);
imshow(q1); title("Orginal"); hold on;

%% Applying the sobel filter with threshold
sobelq1 = edge(q1,'sobel',0.15)
subplot(1,4,2);
imshow(sobelq1); title("Sobel filter"); hold on;

%% Applying Hough transform
[H, T, R] = hough(sobelq1);
subplot(1, 4, 3);
imshow(H,[],'XDATA',T,'YData',R,'InitialMagnification','fit');
axis on, axis square, hold on;
xlabel('\theta'), ylabel('\rho');
title("Hough Transform"); hold on;

%% Highlighting peaks found in the hough transform and
% Draw the lines on the original image
P = houghpeaks(H,3);
x = T(P(:,2));
y = R(P(:,1));
plot(x, y, "s", "color", "white");
lines = houghlines(sobelq1, T, R, P);
subplot(1,4,4);
imshow(q1);
title("Image after hough transform"); hold on;


for k = 1 : length(lines)
    xy = [lines(k).point1; lines(k).point2];
    plot(xy(:, 1), xy(:, 2), "LineWidth", 2, "Color", "green");
    plot(xy(1, 1), xy(1, 2), "x", "LineWidth", 2, "Color", "yellow");
    plot(xy(2, 1), xy(2, 2), "x", "LineWidth", 2, "Color", "red");
end 