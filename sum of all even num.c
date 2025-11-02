#include<stdio.h>
int main(){
int i,n,num,sum=0;
printf("enter the num1: ");
scanf("%d %d",&n,&num);
for(i=n;i<=num;i++){
  if(i%2==0){
  sum=sum+i;
  printf("%d it is even\n",i);
  }
}
  printf("%d it is sum",sum);
  }
