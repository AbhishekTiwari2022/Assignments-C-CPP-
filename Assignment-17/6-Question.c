#include<stdio.h>
int fact(n);
int main()
{
    int k;
    k=fact(5);
    printf("Factorial is : %d",k);
}



int fact(n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
