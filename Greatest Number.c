//A program for to find greater number.
#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Enter three number=");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("\n n1 ia greater");
        }
        else
        {
            printf("\n n2 is greater");
        }
    }
    else
    {
        printf("n3 is greater");
    }
    return 0;
}

