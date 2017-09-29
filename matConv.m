x = input("Enter the array X :\t");
h = input("Enter the sequence H :\t");
b = length(x)-1;
n = [0:b];
subplot(3,1,1);
stem(n,x);
xlabel('Time Index n');
ylabel('X[n]');
len = length(h);
n = [0:len-1];
subplot(3,1,2);
stem(n,h);
xlabel('Time Index n');
ylabel('H[n]');
y=[fliplr(h),fliplr(h)]
m = zeros(len,len);
for shift = 1:1:len;
for i = 1:1:len;
m((len+1)-i,shift) = y(i+shift-1);
end 
end
print("The matrix is:\n");
m
x = transpose(x)
convol=m*x;
convol=transpose(convol)
subplot(3,1,3);
stem(n,convol);
xlabel('Time Index n');
ylabel('Circ Conv Y[n]');
