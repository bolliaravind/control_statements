//WRITE A C PROGRAM TO FIND NUMBER OF DAYS IN MONTH?
#include<stdio.h>
int main(){
int days;
printf("enter a month: ");
scanf("%d",&days);
switch(days){
case 1:
  printf("31 day in jan\n");
  break;
case 2:
  printf("28 day in feb\n");
  break;
case 3:
  printf("31 day in mar\n");
  break;
case 4:
  printf("30 day in april\n");
  break; 
case 5:
  printf("31 day in may\n");
  break; 
case 6:
  printf("30 day in jun\n");
  break;
case 7:
  printf("31 day in july\n");
  break;
case 8:
  printf("31 day in aug\n");
  break; 
case 9:
  printf("30 day in sep\n");
  break; 
case 10:
  printf("31 day in oct\n");
  break; 
case 11:
  printf("30 day in nov\n");
  break; 
case 12:
  printf("31 day in dec\n");
  break; 
default:
  printf("invalid input!enter upto (1-12)");
  }
  }
