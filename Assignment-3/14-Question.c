//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter A Number: ");
    scanf("%d",&num);
    if(num%7==0 || num%3==0)
    {
        printf("Number is divisible by 7 or divisible by 3");
    }
    else
    {
        printf("Number is not divisible by 7 or divisible by 3");
    }
    return 0;
}
