function [output] = Contraharmonic_Filter(input, filter_size, Q)
% input : input image, double
% size: size of filter
% Q: calculation parameter
if length(filter_size)~=2
    error('filter needs two dimensions, row and column')
end
% padding size dependents on the size of filer
x = floor((filter_size(1) - 1) / 2);
y = floor((filter_size(2) - 1) / 2);

padding_img = padarray(input, [x,y], 'replicate'); % to keep the size of the output image
[m,n] = size(input);
output = zeros(size(input));
for i = 1+1 : 1+m
    for j = 1+1 : 1+n
        in_filter = padding_img(i-1 : i+1, j-1 : j+1);
        output(i-1, j-1) = sum(sum(in_filter .^ (Q + 1))) / sum(sum(in_filter .^ Q));
    end
end
end