//15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter A Number: ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Number is positive");
    }
    else if(num==0)
    {
        printf("Number is zero");
    }
    else
    {
        printf("Number is negative");
    }
    return 0;
}
