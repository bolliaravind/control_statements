//WRITE A C PROGRAM TO FIND THE SUM OF DIGITS OF A NUMBER USING A WHILE LOOP?
#include<stdio.h>
int main(){
int num,sum=0,digits;
printf("enter the num: ");
scanf("%d",&num);
if(num<0){
  printf("enter only a positive number");
}else{  
  while(num!=0){
  digits=num%10;
  sum+=digits;
  num/=10;
  }
printf("the sum of the digits =%d\n",sum);
}
}


