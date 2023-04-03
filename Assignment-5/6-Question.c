//6. Write a program to print the first N natural Even numbers.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i);
    }
    return 0;
}


