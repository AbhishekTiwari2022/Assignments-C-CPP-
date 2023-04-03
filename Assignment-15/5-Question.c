#include<stdio.h>
void check_prime(int n);
int main()
{
    int n=6;
    check_prime(n);
}

void check_prime(int n)
{
    int i,x=2;
    while(n)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
                 break;
        if(i==x)
        {
            printf("%d ",x);
            n--;
        }
        x++;

    }

}

