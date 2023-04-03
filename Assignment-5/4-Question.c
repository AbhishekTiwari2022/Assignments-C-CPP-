//4. Write a program to print the first N odd natural numbers.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
    }
    return 0;
}

