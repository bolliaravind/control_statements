//WRITE A C PROGRAM TO PRINT FIBONACCI SERIES UP TO N TERMS USING A FOR LOOP?
#include<stdio.h>
int main(){
int n,i,first=0,second=1,next;
printf("enter the numbers: ");
scanf("%d",&n);
if(n<=0){
  printf("enter only positive numbers");
}else{
  printf("fibonacci series upto %d terms:\n",n);
  if(n>=1){
    printf("%d",first);
   } 
   if(n>=2){
    printf("%d",second);
    }
  for(i=3;i<=n;++i){
  next=first+second;
  printf("%d",next);
  first=second;
  second=next;
  }
  printf("\n");
  }
  }
