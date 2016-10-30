[y, Fs] = audioread('sample.wav');
plot(abs(fft(y,Fs)));