a=textread('linear_congruential.txt');
x=linspace(0,1);
y=pdf('Normal',x,0.5014,0.0839);
plot(x,y,'LineWidth',2)
mu=mean(a)
sigma=var(a)
