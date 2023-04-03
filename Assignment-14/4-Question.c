#include<stdio.h>
void printN(int n);
int main()
{
    printN(10);
    return 0;
}
void printN(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d",i);
}
