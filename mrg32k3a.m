
a=textread('mrg32k3a.txt');
[f,xi]=ksdensity(a)
plot(xi,f)
mu=mean(a)
sigma=sqrt(var(a))