//examples of increment opeators 
#include<stdio.h>
int main(){
int a,b;
float x,y;
int c;
float d;
scanf("%d%d",&a,&b);
printf("addition of two numbers: %d\n",a+b);
printf("subtraction of two numbers: %d\n",a-b);
printf("multiplication of two numbers: %d\n",a*b);
printf("division of two numbers: %d\n",a/b);
printf("modulus of two numbers: %d\n",a%b);
scanf("%f%f",&x,&y);
printf("addition of two floating numbers: %f\n",x+y);
printf("subtraction of two floating numbers: %f\n",x-y);
printf("multiplication of two floating numbers: %f\n",x*y);
printf("division of two floating numbers: %f\n",x/y);
scanf("%d%f",&c,&d);
printf("addition of two mixed numbers: %f\n",c+d);
printf("subtraction of two mixed  numbers: %f\n",c-d);
printf("multiplication of two mixed  numbers: %f\n",c*d);
printf("division of two mixed numbers: %f\n",c/d);
return 0;
}
