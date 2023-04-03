#include<stdio.h>
void printEven_N(int n);

int main()
{
    int n=7;
    printEven_N(n);
    return 0;
}


void printEven_N(int n)
{
    if(n>0)
    {
        printEven_N(n-1);
        printf("%d ",2*n);
    }
}

