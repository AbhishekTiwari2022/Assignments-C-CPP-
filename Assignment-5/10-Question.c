//10. Write a program to print a table of N.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d \n",n*i);
    }
    return 0;
}

