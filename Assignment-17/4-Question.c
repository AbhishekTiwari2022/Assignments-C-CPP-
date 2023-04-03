#include<stdio.h>
int cal_sumsqureN(int n);
int main()
{
    int n=3,c;
    c=cal_sumsqureN(n);
    printf("Sum Is : %d ",c);
}

int cal_sumsqureN(int n)
{
    int s;
    if(n==1)
        return 1;
    s=(n*n)+cal_sumsqureN(n-1);
    return (s);
}



