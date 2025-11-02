//write a c program to find the prime numbers upto 1-99
#include<stdio.h>
#include<math.h>
int main(){
int flag,num;
printf("prime numbers upto 1-99");
for(num=2;num<=99;num++){
flag=1;
for(int i=2;i<=sqrt(num);i++){
 if(num%i==0){
 printf(" %d ",num);
 flag=0;
 break;
 }
 }
 if(flag==1){
    printf("%d",num);
  }  
 }
printf("\n");
} 
 

