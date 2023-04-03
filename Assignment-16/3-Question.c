#include<stdio.h>
void printOdd_N(int n);

int main()
{
    int n=7;
    printOdd_N(n);
    return 0;
}


void printOdd_N(int n)
{
    if(n>0)
    {
        printOdd_N(n-1);
        printf("%d ",2*n-1);
    }
}
