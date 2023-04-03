#include<stdio.h>
int fib(n);
void printfib(n);
int main()
{
    int n=10;
    printfib(n);
}
int fib(n)
{
    if(n==0||n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
void printfib(n)
{
    if(n==0)
        printf("%d ",n);
    else
    {
        printfib(n-1);
        printf("%d ",fib(n));
    }
}
