//write a c program to find the factorial of given numnber using loops
#include<stdio.h>
void main(){
int n,num,fact=1;
scanf("%d",&n);
num=n;
if (n<0)
printf("Enter non negative number\n");
else{
while(n>1)
{
fact*=n;
n--;
}
printf("factorial of %d:%d\n",num,fact);
}
}
