//A program for logical operator and,or,not.
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the A value=");
    scanf("%d",&a);
    printf("Enter the b value=");
    scanf("%d",&b);
    printf("Logical AND=%d\n",(a>b&&b>a));
    printf("Logical OR=%d\n",(a<b||b<a));
    printf("Logical NOT=%d",(a<b));

    return 0;
}

