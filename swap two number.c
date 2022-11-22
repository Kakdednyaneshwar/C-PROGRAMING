#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the value A=");
    scanf("%d",&a);
    printf("enter the value B=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);

    return 0;
}
