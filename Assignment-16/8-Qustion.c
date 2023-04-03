#include<stdio.h>
void print_dtob(n);

int main()
{
    int n=25;
    print_dtob(n);
}

void print_dtob(int n)
{
    if(n>0)
    {
      print_dtob(n/2);
      printf("%d",n%2);
    }
}

