//WRITE A C PROGRAM TO FIND MAXIMUM BETWEEN TWO NUMBERS USING SWITCH CASE?
#include<stdio.h>
int main(){
int num1,num2,max;
printf("enter the num1: ");
scanf("%d",&num1);
printf("enter the num2: ");
scanf("%d",&num2);
switch(num1>num2){
case 1:
      printf("maximum=%d",num1);
      break;
case 0:
     switch (num1<num2){
     case 1:
         printf("maximum=%d\n",num2);
         break;
        case 0:
          printf("both number are equal\n");
          break;
          }
          }
          }
