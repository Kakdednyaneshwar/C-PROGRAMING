//Ap program for Logical&Bitwise operator(&,&&,|,||,!,^)..
#include <stdio.h>

int main()
{
    int a=4,b=5;
    printf("LOGICAL OPERATOR(&&,||,!).\n");
    printf("Logical AND=%d\n",(a>b&&b>a));
    printf("Logical OR=%d\n",(a<b||b<a));
    printf("Logical NOT=%d\n",(a<b));
    printf("BITWISE OPERATOR(&,|,^).\n");
    printf("Bitwise AND=%d\n",a&b);
    printf("Bitwise OR=%d\n",a|b);
    printf("Bitwise X-OR=%d\n",a^b);
    printf("Bitwise one's complement.\n");
    printf("Bitwise right shift=%d\n",a>>1);
    printf("Bitwise left shift=%d",b<<1);

    return 0;
}


