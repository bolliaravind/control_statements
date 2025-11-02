//write a c program to print fibonacci series up to n terms using loops 
#include<stdio.h>
int main(){
int n,frist=0,second=1,final,i;
printf("enter the value: ");
scanf("%d",&n);
for(i=0;i>5;i++){
printf("%d",frist);
final=frist+second;
frist=second;
second=final;
}
}
