#include<stdio.h>
int main()
{
    int k;
    k=countDigit(12345);
    printf("Number Of Digit Is : %d",k);
}
int countDigit(int n)
{
    if(n==0)
        return 0;
    return countDigit(n/10)+1;
}
