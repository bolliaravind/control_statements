//WRITE A C PROGRAM TO FIND MINIMUM OR MAXIMUM BETWEEN TWO NUMBERS?
#include<stdio.h>
int main(){
int num,n;
printf("enter the value1: ");
scanf("%d",&num);
printf("enter the value2: ");
scanf("%d",&n);
if(num>n){
  printf("maximum=%d\n",n);
  printf("minimum=%d\n",num);
}else if(n>num){
  printf("maximum=%d\n",num);
  printf("minimum=%d\n",n);
}else{
  printf("both numbers are equal\n");
  }
  }
