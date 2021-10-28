a=textread('central_limit.txt');

x=linspace(-4,4);
y=pdf('Normal',x,-0.0343,1.0091);
plot(x,y,'LineWidth',2)

mean(a)
sqrt(var(a))
