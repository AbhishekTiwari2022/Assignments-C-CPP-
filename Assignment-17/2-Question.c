#include<stdio.h>
int cal_sumoddN(int n);
int main()
{
    int n=5,c;
    c=cal_sumoddN(n);
    printf("Sum Is : %d ",c);
}

int cal_sumoddN(int n)
{
    int s;
    if(n==1)
        return 1;
    s=(2*n-1)+cal_sumoddN(n-1);
    return (s);
}

