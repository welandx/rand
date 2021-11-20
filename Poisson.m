a=textread('Poisson.txt');
x=0:8;
y=poisspdf(x,1.9921);
bar(x,y,1)
mu=mean(a)