#include<stdio.h>
void print_ReverseN(n);

int main()
{
   int n=123;
   print_ReverseN(n);
}

void print_ReverseN(n)
{
    if(n>0)
    {
        printf("%d",n%10);
        print_ReverseN(n/10);
    }
}
