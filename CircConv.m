x = input("Enter the array X :\t");
h = input("Enter the sequence H :\t");
b = length(x)-1;
n = [0:b];
subplot(3,1,1);
stem(n,x);
xlabel('Time Index n');
ylabel('X[n]');
b = length(h)-1;
n = [0:b];
subplot(3,1,2);
stem(n,h);
xlabel('Time Index n');
ylabel('H[n]');
title("\n\n");
y = (fft(x)).*(fft(h));
y = ifft(y)
b = length(y)-1;
n = [0:b];
subplot(3,1,3);
stem(n,y);
xlabel('Time Index n');
ylabel('CircConv Y[n]');
title("\n\n\n\n");