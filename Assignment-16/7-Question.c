#include<stdio.h>
void printN_Square(n);

int main()
{
    int n=7;
    printN_Square(n);
}

void printN_Square(n)
{
    if(n>0)
    {
        printN_Square(n-1);
        printf("%d ",n*n);
    }
}
