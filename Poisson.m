a=textread('Poisson.txt');
x=-1:0.01:8;
f=ksdensity(a,x)
plot(x,f)
mu=mean(a)