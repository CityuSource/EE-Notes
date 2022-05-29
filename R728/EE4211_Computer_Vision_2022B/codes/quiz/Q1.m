close all;
clc;
clear;

image = imread('1.jpg');

sq2 = -(sqrt(2));

filter1 = [-1, 0, 1; sq2,0,sq2; -1,0,1];
filter2 = [-1, -1, -1; 0,0,0; 1,1,1];

%% we do a) first

imgrad1 = imfilter(double(image),filter1);
imgrad1 = imgrad1 >= 0.2;

figure;
subplot(1,4,1);imshow(image),title('Original');
subplot(1,4,2);imshow(imgrad1),title('Convolution mask a)');

[H,T,R] = hough(imgrad1);
subplot(1,4,3);
imshow(H,[],'XData',T,'YData',R,'InitialMagnification','fit');%hough transform
xlabel('\theta'), ylabel('\rho');title('Hough transform');
axis on,axis square,hold on; 
P  = houghpeaks(H,2);% identify four large points
x = T(P(:,2)); 
y = R(P(:,1));
plot(x,y,'s','color','white');

lines=houghlines(imgrad1,T,R,P);%identify four lines
subplot(1,4,4);
imshow(image), title('Image After Hough transform');hold on; %show the results
for k = 1:length(lines)
xy = [lines(k).point1; lines(k).point2];
 plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
plot(xy(1,1),xy(1,2),'x','LineWidth',2,'Color','yellow');
plot(xy(2,1),xy(2,2),'x','LineWidth',2,'Color','red');
end

%% now we do b)
imgrad2 = imfilter(double(image),filter2);
imgrad2 = imgrad2 >= 0.2;

figure;
subplot(1,4,1);imshow(image),title('Original');
subplot(1,4,2);imshow(imgrad2),title('Convolution mask b)');

[H,T,R] = hough(imgrad2);
subplot(1,4,3);
imshow(H,[],'XData',T,'YData',R,'InitialMagnification','fit');%hough transform
xlabel('\theta'), ylabel('\rho');title('Hough transform');
axis on,axis square,hold on; 
P  = houghpeaks(H,2);% identify four large points
x = T(P(:,2)); 
y = R(P(:,1));
plot(x,y,'s','color','white');

lines=houghlines(imgrad2,T,R,P);%to identify four lines
subplot(1,4,4);
imshow(image), title('Image After Hough transform');hold on; %show the results
for k = 1:length(lines)
xy = [lines(k).point1; lines(k).point2];
 plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
plot(xy(1,1),xy(1,2),'x','LineWidth',2,'Color','yellow');
plot(xy(2,1),xy(2,2),'x','LineWidth',2,'Color','red');
end
