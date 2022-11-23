//A program for day of yhe week using switch statement..
#include <stdio.h>

int main()
{
    int day;
    printf("Enter your digit choice(1,2,3,4,5,6,7)");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thursday");
        break;
        case 6:
        printf("friday");
        break;
        case 7:
        printf("Saturday");
        break;
        default:
        printf("Invalid number");
    }
   

    return 0;
}
