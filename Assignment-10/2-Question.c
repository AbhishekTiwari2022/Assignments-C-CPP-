////1. Write a program to print the N term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c,i;
    printf("Enter How Many Terms You Want To Print The Fibonacci Series : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }

    return 0;
}
//0 1 1 2 3 5 8 13

