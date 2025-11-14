//WRITE A C PROGRAM TO FIND THE FACTORIAL OF A GIVEN NUMBER USING A FOR LOOP?
#include<stdio.h>
int main(){
int num,i,fact=1;
printf("enter the positive num: ");
scanf("%d",&num);
if(num<0){
  printf("factorial is not for negative num");
}else{
  for(i=1;i<=num;++i){
    fact*=i;
    }
    printf("%d",fact);
  }
  }
  
  
