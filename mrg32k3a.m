
a=textread('mrg32k3a.txt');
x=linspace(0,1);
y=pdf('Normal',x,0.4989,0.2888);
plot(x,y,'LineWidth',2)
mu=mean(a)
sigma=sqrt(var(a))