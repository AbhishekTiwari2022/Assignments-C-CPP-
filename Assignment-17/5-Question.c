#include<stdio.h>
int cal_sumDigit(int n);
int main()
{
    int n=2456,c;
    c=cal_sumDigit(n);
    printf("Sum Is : %d ",c);
}

int cal_sumDigit(int n)
{
    int s,r;
    if(n==0)
        return 0;
    //r=n%10;
    s=cal_sumDigit(n/10)+n%10;
    return (s);
}

