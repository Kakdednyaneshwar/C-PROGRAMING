//A program for switch statement In mathamatics operation.
#include <stdio.h>

int main()
{
    int a,b;
    int choise;
    printf("enter the two number=");
    scanf("%d%d",&a,&b);
    printf("enter the choise Digit(1=(+),2=(-),3=(*),4=(/))=");
    scanf("%d",&choise);
    
    switch(choise)
    {
        case 1:
        printf("Addition is A+B=%d",a+b);
        break;
        case 2:
        printf("substraction is A-B=%d",a-b);
        break;
        case 3:
        printf("Multiplication is A*B=%d",a*b);
        break;
        case 4:
        printf("Division is A/B=%d",a/b);
        break;
        default:
        printf("Invalid number");
        
    }
    return 0;
}


