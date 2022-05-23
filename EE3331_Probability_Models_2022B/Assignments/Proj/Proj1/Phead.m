clear
close all
maxNum = 10000;
stepSize = 100;
%% generate experimental outcomes
for i = 1 : maxNum
H(i) = binornd(1, 0.5, 1);
end
%% plot results
i = 1;
for totalNum = 10 : stepSize: maxNum
p(i) = head(totalNum,H);
i = i + 1;
end
plot(10 : stepSize: maxNum, p)
xlabel('number of experiments')
ylabel('probability')
%% function for probability computation
function y = head(totalNum,H)
y = sum(H(1:totalNum))/totalNum;
end