//  caluclator program using switch  
#include<stdio.h>
int main(){
int a,b,opeartor;
printf("enter the value a: ");
scanf("%d",&a);
printf("enter the value b: ");
scanf("%d",&b);
printf("enter the opeartor + - %  ");
scanf("%d",&opeartor);
switch (opeartor){
case 'a'+'b':
    printf("sum of value");
    break;
case 'a'-'b':
    printf("sum of value");
    break;    
case 'a'%'b':
    printf("sum of value");
    break;    
case 'a'/'b':
    printf("sum of value");
    break; 
    }
return 0;
}
