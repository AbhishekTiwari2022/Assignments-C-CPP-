#include<stdio.h>

void print_all_prime_factor_between_two_number(int a,int b);
int main()
{
    int a=10,b=20;
    print_all_prime_factor_between_two_number(a,b);
    return 0;
}

void print_all_prime_factor_between_two_number(int a,int b)
{
    int x,i;
    for(x=a;x<=b;x++)
    {
        for(i=2;;i++)
            if(x%i==0)
                break;
        if(i==x)
            printf("%d ",x);
    }
}
