#include<stdio.h>
int hcf(int a,int b);
int main()
{
    int k;
    k=hcf(8,12);
    printf("HCF is : %d",k);
}

int hcf(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
        else
            return hcf(a%b,b);
    }
    else
    {
        if(b%a==0)
            return a;
        else
            return hcf(a,b%a);
    }
}


