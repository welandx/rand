a=textread('mersenne_twister.txt');
x=linspace(0,1);
y=pdf('Normal',x,0.4991,0.2860);
plot(x,y,'LineWidth',2)
mu=mean(a)
sigma=sqrt(var(a))

