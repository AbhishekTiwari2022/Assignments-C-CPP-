//1. Write a program to check whether a given number is positive or non positive.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Number Is Positive");
    }
    else
    {
        printf("Number Is Non-Positive");
    }
    return 0;
}
