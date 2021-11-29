
a=textread('box_muller.txt');
[f,xi]=ksdensity(a);
x=linspace(-4,4);
y=pdf('Normal',x,0.5,0.8);
%plot(x,y,'LineWidth',2)

hold

plot(xi,f)
mean(a)
sqrt(var(a))
