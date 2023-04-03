//18. Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter month number : ");
    scanf("%d",&num);
    if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12)
    {
        printf("Number of days of month number %d is 31",num);
    }
    else if(num==2)
    {
        printf("Number of days of month number %d is 29",num);
    }
    else if
    {
        printf("Number of days of month number %d is 30",num);
    }

}

