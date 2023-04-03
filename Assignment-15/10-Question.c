
#include<stdio.h>
int fact(int n);
int sum_series(int n);
void pascal(int n);
int main()
{
    int n=5;
    pascal(n);
    return 0;
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int combi(int n,int r)
{
    return fact(n) / (fact(r) * fact(n-r));
}
void pascal(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",combi(i,j));
        }
        printf("\n");
    }
}
