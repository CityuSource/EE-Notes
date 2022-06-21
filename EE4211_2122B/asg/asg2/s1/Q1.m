clear; clc; close all;
I0 = imread('1.tif');
figure;
subplot(2,2,1); imshow(I0); title("Original image");
%% Apply sobel filter
% I1 = edge(I0, 'sobel');
% I1 = imfilter(I0, w);
Fx = fspecial('sobel'); % Sobel Gx kernel
Fy = Fx'; % gradient Gy
Gx = imfilter(double(I0), Fx, 'replicate'); % find the edges along x-axis
Gy = imfilter(double(I0), Fy, 'replicate'); % find the edges along y-axis
G = sqrt(Gy.^2 + Gx.^2); % Find magnitude
%% Process the gradient image
th = 0.15 * max(G(:));
I1 = G;
idx = I1 < th;
I2 = I1;
I2(idx) = 0;
BW = I2;
% BW = edge(I0, 'sobel', 0.1);
subplot(2,2,2);imshow(BW);title('Gradient magnitude');

%% Apply Hough transform
I = I0;
[H,T,R] = hough(BW);%H: hough tranform matrix; T: angle; R: radius
% show hough transform
subplot(2,2,3);
imshow(H,[],'XData',T,'YData',R,'InitialMagnification','fit');
xlabel('\theta'), ylabel('\rho');title('Hough transform');
axis on,axis square,hold on; 
% Select the peak 2 points
P  = houghpeaks(H,2); 
x = T(P(:,2)); 
y = R(P(:,1));
% plot the lines
plot(x,y,'s','color','white');
lines=houghlines(BW,T,R,P);

%% Plot the detected two lines on the image
subplot(2,2,4);
imshow(I), title('Image After Hough transform');hold on;
for k = 1:length(lines)
    xy = [lines(k).point1; lines(k).point2];
    plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
    plot(xy(1,1),xy(1,2),'x','LineWidth',2,'Color','yellow');
    plot(xy(2,1),xy(2,2),'x','LineWidth',2,'Color','red');
end 