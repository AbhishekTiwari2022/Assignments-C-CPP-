#include<stdio.h>
int main()
{
    int day;
    printf("Enter Week Day Number : ");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
                printf("Monday Is New Beginning");
                break;
        case 2:
                printf("Tuesday Is A Day Of God Bajarangbali");
                break;
        case 3:
                printf("Welcome Wednesday");
                break;
        case 4:
                printf("Namaste Thursday");
                break;
        case 5:
                printf("Hello Friday");
                break;
        case 6:
                printf("Jai Shanidev Ji Ki");
                break;
        case 7:
                printf("Enjoy Holiday");
                break;

        default :
                printf("Invalid Month Number");
    }
    return 0;
}

