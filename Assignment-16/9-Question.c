#include<stdio.h>
void print_dtoO(n);

int main()
{
    int n=25;
    print_dtoO(n);
}

void print_dtoO(int n)
{
    if(n>0)
    {
      print_dtoO(n/8);
      printf("%d",n%8);
    }
}


