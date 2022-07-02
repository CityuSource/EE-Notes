clear
close all

rollN = 10000;

dices = randi(6,3,rollN);
total = sum(dices);
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