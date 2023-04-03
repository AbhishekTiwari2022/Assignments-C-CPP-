//5. Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    if(n>99 && n<1000)
    {
        printf("Number Is A Three Digit Number");
    }
    else
    {
        printf("Number Is Not A Three Digit Number");
    }
    return 0;
}
