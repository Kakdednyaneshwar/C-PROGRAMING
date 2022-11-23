//A program for mathamatics operation...
#include<stdio.h>

int main()
{
int a,b;
char choice;

printf("Enter operator(+,-,*,/)\n");
printf("Enter choice=");
scanf("%c",&choice);
printf("Enter the two value=");
scanf("%d%d",&a,&b);
switch(choice)
   {
   case '+':
   printf("the addition is=%d",a+b);
   break;
   case '-':
   printf("the substraction is=%d",a-b);
   break;
   case '*':
   printf("the Multipliction is=%d",a*b);
   break;
   case '/':
   printf("the divition is=%d",a/b);
   break;
   default:
   printf("invalid operator");

   }
   return 0;
}
