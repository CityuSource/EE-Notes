clc;
clear;
close all;

I = im2double(imread("1.tif"));

figure;
subplot(1, 4, 1); imshow(I); title("Orginal");

c_mask = [-1, 0, 1;
          -2 ^ 1 / 2, 0 , 2 ^ 1 / 2;
          -1, 0, 1];

f1 = imfilter(double(I), c_mask);
f2 = f1 >= 0.1;
subplot(1,4,2);
imshow(f2); title("Gradient magnitude")

[H, T, R] = hough(f2);
subplot(1, 4, 3);
imshow(H, [], "XData", T, "YData", R, "InitialMagnification","fit"); title("Hough transform");
xlabel("\theta"), ylabel("\rho"); axis on, axis square, hold on;

P = houghpeaks(H, 4); 
x = T(P(:, 2)); 
y = R(P(:, 1));
plot(x, y, "s", "color", "white");
lines = houghlines(f2, T, R, P);
subplot(1, 4, 4); imshow(I); title("Image After Hough transform"); hold on;

for k = 1 : length(lines)
    xy = [lines(k).point1; lines(k).point2];
    plot(xy(:, 1), xy(:, 2), "LineWidth", 2, "Color", "green");
    plot(xy(1, 1), xy(1, 2), "x", "LineWidth", 2, "Color", "yellow");
    plot(xy(2, 1), xy(2, 2), "x", "LineWidth", 2, "Color", "red");
end 

