#include<stdio.h>
int even_odd(int);

int main()
{
    printf("%d",even_odd(2));

    return 0;
}
int even_odd(int n)
{
    return n%2==0?1:0;
}
