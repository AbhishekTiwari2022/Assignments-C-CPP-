#include<stdio.h>
int check_next_prime(int n);
int main()
{
    int n=13,c;
    c=check_next_prime(n);
    printf("Next Prime Is : %d",c);
}

int check_next_prime(int n)
{
    int i,h;
    for(h=n+1;h;h++)
    {
        for(i=2;i<h;i++)
        {
            if(h%i==0)
            {

                break;
            }

        }

        if(i==h)
        {
            return h;
            break;
        }

    }
}

