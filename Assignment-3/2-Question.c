//2. Write a program to check whether a given number is divisible by 5 or not


#include<stdio.h>
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("Number Is Divisible By 5");
    }
    else
    {
        printf("Number Is Not Divisible By 5");
    }
    return 0;
}
