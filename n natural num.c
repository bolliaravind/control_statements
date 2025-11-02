// write a c program frist n natural numbers which are not diviable by 3 or 5 using loops and if-else statements
#include<stdio.h>
int main(){
int i,num,sum=0;
printf("enter the value: ");
scanf("%d",&num);
for(i=0;i<=num;i++){
  if(i%3!=0 && i%5!=0)
   sum=sum+i;
   }
   printf("%d",sum);
   }

