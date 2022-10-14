#data wrangling using tidyr
#installation of required packages
#install.packages("tidyr")
library(tidyr)
#import Data set"marketing_campaign_1_" using
library(readr)
marketing_campaign_1_ <- read_delim("C:/Users/Admin/Downloads/marketing_campaign (1).csv", 
                                    delim = "\t", escape_double = FALSE, 
                                    trim_ws = TRUE)
View(marketing_campaign_1_)
marketing_campaign<-data.frame(marketing_campaign_1_)
View(marketing_campaign)
str(marketing_campaign_1_)
Y=gather(marketing_campaign,"AccepteddCmp","Value",21:25)
View(Y)
#total no. of columns
S=gather(marketing_campaign,"HELLO","Value",26:28)
View(S)
Y1=gather(marketing_campaign,"PurchaseType","Quantity",16:19)
View(Y1)
#two generate multiple columns from 2 columns
Y2=spread(marketing_campaign,Marital_Status,Income)
View(Y2)
Y3=spread(marketing_campaign,Education,Income)
View(Y3)
Y4=spread(marketing_campaign,Education,Marital_Status)
View(Y4)