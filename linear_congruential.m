a=textread('linear_congruential.txt');
[f,xi]=ksdensity(a)
plot(xi,f)
mu=mean(a)
sigma=sqrt(var(a))


