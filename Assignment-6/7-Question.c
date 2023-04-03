//7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    printf("Digits in a given %d number is %d",n,c);
    return 0;
}

