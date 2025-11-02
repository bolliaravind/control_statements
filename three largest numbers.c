//write a c program to find the largest of three numbers
#include<stdio.h>
int main(){
int a,b,c;
printf("enter the value a: ");
scanf("%d",&a);
printf("enter the value b: ");
scanf("%d",&b);
printf("enter the value c: ");
scanf("%d",&c);
if(a>b && a>c){
printf("it is largest num %d",a);
}
else if(b>a && b>c ){
      printf("it is largest num %d",b);
} else if(c>a && c>b){
      printf("it is largest num %d",c);
}else{
    printf("all num are equal");
}
return 0;
}
