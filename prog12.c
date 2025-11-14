//WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS UPPERCASE OR LOWERCASE?
#include<stdio.h>
int main(){
char ch;
printf("enter a alphabet: ");
scanf("%c",&ch);
if(ch>='a' && ch<='z'){
  printf("%c is an lowercase\n",ch);
} else if(ch>='A' && ch<='Z'){
  printf("%c is an UPPERCASE\n",ch);
}else{
  printf("invalid input\n");
  }
  }
