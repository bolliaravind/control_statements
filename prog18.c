//WRITE A C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS PRIME OR NOT USING A WHILE LOOP?
#include<stdio.h>
int main(){
int num,i=2,prime=1;
printf("enter a positive num: ");
scanf("%d",&num);
if(num<=1){
  printf("%d is not a prime numbers\n",num);
}else{
  while(i<=num/2){
     if(num%i==0){
      prime=0;
      break;
      }
      i++;
      }
   if(prime==1){
     printf("%d is a prime num\n",num);
    }else{
      printf("%d is not a prime number\n",num);
    }
    }
    }
    
    

