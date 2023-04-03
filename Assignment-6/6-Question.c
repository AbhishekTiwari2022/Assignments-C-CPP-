//6. Write a program to calculate factorial of a number.

#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial of %d number is %d",n,f);
    return 0;
}
