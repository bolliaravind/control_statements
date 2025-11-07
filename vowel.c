//WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS A VOWEL OR CONSONANT?
#include<stdio.h>
int main(){
char ch;
printf("enter a character: ");
scanf("%c",&ch);
if((ch>='a' && ch<='z') || (ch >='A' && ch<= 'Z')){
   if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u' ||
      ch=='A' || ch=='E'||ch=='I'||ch=='O'||ch=='U'){
      printf("%c it is an vowel",ch);
  }else {
    printf("%c it is an consonant",ch);
  }
} else {
  printf("enter: %c is not an alphabet\n",ch);
  }
  return 0;
  }

