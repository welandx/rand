a=textread('mersenne_twister.txt');
x=linspace(-0.5,1.5,10000);
y=ksdensity(a,x,'function','cdf')
plot(x,y)
mu=mean(a)
sigma=sqrt(var(a))

