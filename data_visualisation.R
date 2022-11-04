View(mtcars)
ggplot(mtcars,aes(x=cyl))+geom_bar(width=NULL)+geom_dotplot(binwidth = 0.09)
ggplot(mtcars,aes(x=qsec,stat="count"))+geom_boxplot()+coord_flip()+theme(axis.text.y=element_blank(),axis.ticks.y=element_blank())
ggplot(mtcars,aes(x=cyl))+geom_histogram(binwidth = 0.5)
ggplot(mtcars,aes(x=cyl))+geom_density()
View(mtcars)
ggplot(mtcars,aes(x=cyl))+geom_bar(width=NULL)+geom_dotplot(binwidth = 0.09)
ggplot(mtcars,aes(x=qsec,stat="count"))+geom_boxplot()+coord_flip()+theme(axis.text.y=element_blank(),axis.ticks.y=element_blank())
ggplot(mtcars,aes(x=cyl))+geom_histogram(binwidth = 0.5)
ggplot(mtcars,aes(x=cyl))+geom_density()
x=c(1:5)
y=c(2 ,4 ,9 ,16 ,25)
plot(x,y)
ggplot(data=mtcars,aes(x=hp,y=mpg,col=disp))
ggplot(data=mtcars,aes(x=hp,y=mpg))
ggplot(data=mtcars,aes(x=hp,y=mpg,col=disp))+geom_point()
ggplot(data=mtcars,aes(x=hp,y=mpg))+geom_point()
ggplot(data=mtcars,aes(x=hp,y=mpg,size=disp))+geom_point()#adding size
ggplot(data=mtcars,aes(x=hp,y=mpg,col=factor(cyl),shape=factor(am)))+geom_point()#adding color and shape
ggplot(data=mtcars,aes(x=hp))+geom_histogram(binwidth=5)#histogram plot
ggplot(data=mtcars,aes(x=hp,y=mpg,shape=factor(cyl)))+geom_point()+#facet layer
facet_grid(am~.)+#seperate rows according to transmission type
facet_grid(.~cyl)#seperate columns according to cylinders
ggplot(data=mtcars,aes(x=hp,y=mpg,shape=factor(cyl)))+geom_point()+facet_grid(vs~.)+facet_grid(.~gear)
# statistics layer
ggplot(data=mtcars,aes(x=hp,y=mpg))+geom_point()+stat_smooth(method=lm,col="red")
#coordinate layers
ggplot(data=mtcars,aes(x=hp,y=mpg))+geom_point()+facet_grid(.~cyl)+theme(plot.background = element_rect(fill="green",colour="gray"))
ggplot(data=mtcars,aes(mpg,wt,colour=cyl))+geom_point()+labs(colour="Cylinders")+xlab("miles per gallon")+ylab("weight")
ggplot(data=BOD,mapping=aes(x=Time,y=demand))+
  geom_line(color="green")
ggplot(data=BOD,mapping=aes(x=Time,y=demand))+
  geom_point(size=10)
ggplot(data=BOD,mapping=aes(x=Time,y=demand))+
  geom_point(size=4)
ggplot(data=BOD,mapping=aes(x=Time,y=demand))+
  geom_point(size=4)+geom_line(color="green")
ggplot(data=BOD,mapping=aes(x=Time,y=demand))+
  geom_boxplot(color="red")
