#include<stdio.h>
void fib(int n);
int main()
{
    int n=7;
    fib(n);
    return 0;
}
void fib(int n)
{
    int a=0,b=1,i,c;
    printf("%d ",a);
    printf("%d ",b);
    for(i=2;i<=n;i++)
    {
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
}
