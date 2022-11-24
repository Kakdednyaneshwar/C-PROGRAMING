//A program for Relational operator(<,>,<=,>=,==,!=)
#include <stdio.h>

int main()
{
   int a,b;
   printf("Enter the A value=");
   scanf("%d",&a);
   printf("Enter the B value=");
   scanf("%d",&b);
   printf("Less than:=%d\n",a<b);
   printf("Greater than:=%d\n",a>b);
   printf("Less than equal to:=%d\n",a<=b);
   printf("Greater then equal to:=%d\n",a>=b);
   printf("Equal to:=%d\n",a=b);
   printf("Not Equal to:=%d",a!=b);

    return 0;
}
