#include<stdio.h>
void printN(int n);

int main()
{
    int n=10;
    printN(n);
    return 0;
}
void printN(int n)
{
    if(n!=0)
    {
       printN(n-1);
       printf("%d ",n);
    }
}
