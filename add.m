a=textread('add.txt');
[f,xi]=ksdensity(a)
plot(xi,f,'r')
mu=mean(a)
sigma=sqrt(var(a))