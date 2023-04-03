#include<stdio.h>
int cal_sumN(int n);
int main()
{
    int n=5,c;
    c=cal_sumN(n);
    printf("Sum Is : %d ",c);
}

int cal_sumN(int n)
{
    if(n==1)
        return 1;
    return n+cal_sumN(n-1);
}
