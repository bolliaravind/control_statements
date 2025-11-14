//WRITE A C PROGRAM TO PRINT EVEN NUMBERS BETWEEN 1 TO 20 USING A FOR LOOP?
#include<stdio.h>
int main(){
int i;
printf("even numbers between 1 to 20 are:\n ");
for(i=2;i<=20;i++){
  if(i%2==0){
    printf("%d\n",i);
}
}
}
