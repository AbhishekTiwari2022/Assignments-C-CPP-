#include<stdio.h>
void printReverseN(int n);

int main()
{
    int n=10;
    printReverseN(n);
    return 0;
}
void printReverseN(int n)
{
    if(n>0)
    {
       printf("%d ",n);
       printReverseN(n-1);
    }
}

