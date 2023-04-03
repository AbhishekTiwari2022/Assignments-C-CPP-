#include<stdio.h>
void printoddN(int n);
int main()
{
    printoddN(10);
    return 0;
}
void printoddN(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",2*i-1);
}

