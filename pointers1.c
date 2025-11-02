// simple examples of pointers
#include<stdio.h>
int main(){
int a=25,b=a+25;
int* ptr=&a;
int* ptr=&b;
printf("value of a: %d\n",a);
printf("address of a: %p\n",&ptr);
printf("value of ptr: %d\n",*ptr);
}

