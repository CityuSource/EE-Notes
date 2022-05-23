clear
close all

%% compare the txts
fid = fopen('Dream1.txt','r');
dream1 = fread(fid);
fid = fopen('decode.txt','r');
decoded = fread(fid);
result = dream1 ~= decoded;
check = sum(result~=0);

mostapperance = mode(dream1);

[GC, GR] = groupcounts(dream1);

total = sum(GC);
char_e_prob = 842/total;
char_space_prob = 1549/total;

probabilities = GC/total;
entropy = -sum(probabilities.*log2(probabilities));