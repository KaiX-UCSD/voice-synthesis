[y, Fs] = audioread('sample.wav');
values = abs(fft(y, Fs));
[sortedValues, sortedIndices] = sort(values, 'descend');
max10Values = zeros(10,1);
max10Indices = zeros(10,1);
index = 1;
a = 16000
for i = 1 : a
    for j = 1: 10
        if abs(max10Indices(j)-i) < 100
        else
            max10Values(index) = sortedValues(i);
            max10Indices(index) = sortedIndices(i);
            index = index + 1;
        end
        
    end
    if index > 10
        break
    end
end
disp(max10Values);
disp(max10Indices);
plot(abs(fft(y,Fs)));