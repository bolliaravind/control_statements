//write a c pogram to find the greatest of two numbers
#include<stdio.h>
int main(){
int a,b;
printf("enter the value a: ");
scanf("%d",&a);
printf("enter the value b: ");
scanf("%d",&b);
if(a>b && b<a){
printf("%d is greater than%d",a,b);
}
else{
printf("%d is lessthan %d",b,a);
}
return 0;
}

