//1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c,i;
    printf("Enter How Many Terms You Want To Print The Fibonacci Series : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    return 0;
}
