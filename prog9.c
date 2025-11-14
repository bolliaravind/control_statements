//WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS AN ALPHABET OR NOT?
#include<stdio.h>
int main(){
char ch;
printf("enter an alphabet: ");
scanf("%c",&ch);
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
  printf("%c its is an alphabet",ch);
}else{
  printf("%cits is not an alphabet",ch);
  }
  }
