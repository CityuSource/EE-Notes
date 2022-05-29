function [alphabet, probability] = countProbability(sig)
[x, y, z]=size(sig);
h=zeros(1,255);
for i=1:y
        iy=sig(i);
        val=double(iy);
        h(val)=h(val)+1;
end
p=h./(x*y);

[p_sort, index] = sort(p,'descend');

for i = 1 : 255
   if p_sort(i) == 0
       break
   end
   alphabet{i} = char(index(i));
   probability(i) = p_sort(i);    
end
end