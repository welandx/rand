
a=textread('pareto.txt');
x=0:0.001:20;
f=ksdensity(a,x);
plot(x,f)
mu=mean(a)
sigma=sqrt(var(a))