clear 
close all

%% read text 
fid = fopen('Dream1.txt','r');
F = fread(fid);
fclose(fid);
sig = char(F');

%% compute probability
[alphabet, probability] = CountProbability(sig);
dict = HuffmanDict(alphabet,probability);

%% compress text
sig_encoded = HuffmanEncoder(sig, dict);
fid = fopen('encode.txt','w');
fwrite(fid,sig_encoded);
fclose(fid);

%% decompress text
sig_decoded = char(HuffmanDecoder( sig_encoded, dict))';
fid = fopen('decode.txt','w');
fwrite(fid,sig_decoded);
fclose(fid);