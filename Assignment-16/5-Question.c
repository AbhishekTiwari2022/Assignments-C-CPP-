#include<stdio.h>
void printOdd_N_R(int n);

int main()
{
    int n=7;
    printOdd_N_R(n);
    return 0;
}


void printOdd_N_R(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        printOdd_N_R(n-1);

    }
}

