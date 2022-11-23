#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter the A value=");
    scanf("%d",&a);
    printf("Enter the B value=");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("swap the value:");
    printf("a=%d b=%d",a,b);
    return 0;
}
