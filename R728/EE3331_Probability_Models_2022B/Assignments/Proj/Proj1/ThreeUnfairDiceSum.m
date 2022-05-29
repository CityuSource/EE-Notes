clear
close all

rollN = 10000;

out = randsrc(3,rollN,[1 2 3 4 5 6; 0 0.1 0.15 0.2 0.25 0.3]);
total = sum(out);
sumofnine = total == 9;
sumoften = total == 10;
desired = sumofnine+ sumoften;
dicemean = mean(total);

stepSize = 100;

i = 1;
for totalNum = 10 : stepSize : rollN
    averg(i) = sum(desired(1 : totalNum))/totalNum;
    i = i + 1;
end

plot(10 : stepSize : rollN,averg)
xlabel('number of experiments')
ylabel('probability of getting 9 or 10')