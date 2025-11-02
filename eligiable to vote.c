//write a c program to read the age of a candidate and determine whether he is elegiable to cast his/he own vote
#include<stdio.h>
int main(){
int a;
printf("enter the age: ");
scanf("%d",&a);
if (a>=18){
printf("your are eligilble to vote");
}
else{
printf("your are not eligilable to vote");
}
return 0;
}
