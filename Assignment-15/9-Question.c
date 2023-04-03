#include<stdio.h>
int fact(int n);
int sum_series(int n);

int main()
{
    int n=5,c;
    c=sum_series(n);
    printf("%d ",c);
}

int sum_series(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
      s=s+fact(i)/i;
    }
    return s;
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
