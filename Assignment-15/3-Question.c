#include<stdio.h>
int check_prime(int n);
int main()
{
    int n=9,c;
    c=check_prime(n);

    if(c==1)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}

int check_prime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }

    }

    if(flag==0)
        return 1;
    else
        return 0;
}
