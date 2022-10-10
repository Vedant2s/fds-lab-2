# data frame
Name<-c("amir","malik")
Age<-c(21,22)
ITB<-data.frame(Name,Age)
print(ITB)
#type 3 for.csv file
install.packages("readr")
library(readr)
potato <- read_csv("C:/Users/Admin/Downloads/potato.csv")
View(potato)
#for excel file
install.packages("readxl")
demo <- read_excel("C:/Users/Admin/Downloads/demo.xlsx", 
                   +     col_types = c("text", "text", "text", 
                                       +         "text", "text", "text", "numeric", 
                                       +         "numeric", "numeric", "numeric", 
                                       +         "numeric", "numeric", "numeric", 
                                       +         "numeric", "numeric", "numeric", 
                                       +         "numeric", "numeric", "numeric", 
                                       +         "numeric", "numeric", "numeric", 
                                       +         "numeric", "numeric", "numeric", 
                                       +         "numeric", "numeric", "numeric", 
                                       +         "numeric", "numeric"))
 View(demo)
 
 