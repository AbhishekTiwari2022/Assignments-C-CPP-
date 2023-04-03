#include<stdio.h>
int cal_sumevenN(int n);
int main()
{
    int n=5,c;
    c=cal_sumevenN(n);
    printf("Sum Is : %d ",c);
}

int cal_sumevenN(int n)
{
    int s;
    if(n==1)
        return 2;
    s=(2*n)+cal_sumevenN(n-1);
    return (s);
}


