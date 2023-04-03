//7. Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d ",2*i);
    }
    return 0;
}

