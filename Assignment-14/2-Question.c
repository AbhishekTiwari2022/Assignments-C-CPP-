#include<stdio.h>
float simple_interest(int,int,int);

int main()
{
    simple_interest(1000,5,3);
    return 0;
}
float simple_interest(int p,int r,int t)
{
    float si;
    si=p*r*t/100;
    printf("Simple Interest Is %.2f: ",si);
    return si;
}
