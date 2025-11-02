//write a c program to find which team won cricket match in which year using loops
#include<stdio.h>
int main(){
int year;
printf("enter the year: ");
scanf("%d",&year);
switch(year){
case 2008:
     printf("raj won the match");
     break;
case 2009:
    printf("D won the match");
    break;
case 2012:
case 2014:
case 2024:
     printf("KKR won the match");
     break;
case 2013:
case 2015:
case 2017:
    printf("mi won the match");
     break;
case 2010:
case 2011:
case 2018:
case 2021:
case 2023:
        printf("csk won the match");
         break;
default:
        printf("invaild input");
}
return 0;
}
    
