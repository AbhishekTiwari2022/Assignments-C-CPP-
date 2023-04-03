#include<stdio.h>
void printEven_N_R(int n);

int main()
{
    int n=7;
    printEven_N_R(n);
    return 0;
}


void printEven_N_R(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        printEven_N_R(n-1);

    }
}


