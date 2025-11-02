#include<stdio.h>
int main(){
int i,num,flag=0;
printf("enter the num: ");
scanf("%d",&num);
for(i=1;i<=num;i++){
if(i*i==num){
  flag=1;
  break;
  }
  }
  if(flag==1){
  printf("%d is a prefect sqaure\n",num);
  }else{
  printf("%d is not a prefect sqaure\n",num);
  }
}









































































































































