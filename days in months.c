//write a c program how many days are present in a month using switch 
#include<stdio.h>
int main(){
int a;
printf("enter the month: ");
scanf("%d",&a);
switch(months){
case jan:
    printf("31 days in jan");
    break;
case feb:
    printf("28 days in feb");
    break;
case mar:
    printf("31 days in mar");
    break;
case april:
    printf("30 days in april");
    break;
case may:
"    printf("31 days in may");
    break;
case jun:
    printf("30 days in jun");
    break;
case july:
    printf("31 days in july");
    break;
case sep:
    printf("30 days in sep");
    break;
case oct:
    printf("31 days in oct");
    break;
case nov:
    printf("30 days in nov");
    break;
case dec:
    printf("31 days in dec");  
    break;
}
default:
      printf("enter the correct input");
      }
return 0;
}
