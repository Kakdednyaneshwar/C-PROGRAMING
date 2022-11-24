//A program for bitwise operator AND,OR,X-OR...
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the a value=");
    scanf("%d",&a);
    printf("Enter the B value=");
    scanf("%d",&b);
    printf("Bitwise AND=%d\n",a&b);
    printf("Bitwise OR=%d\n",a|b);
    printf("Bitwise X-OR=%d",a^b);
    

    return 0;
}

