
a=textread('mrg32k3a.txt');
x=0:0.00001:0.99999;
bar(x,a)
mu=mean(a)
sigma=sqrt(var(a))