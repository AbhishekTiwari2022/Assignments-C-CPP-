//4. Write a program to calculate sum of squares of first N natural numbers


#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("Sum of first N natural number is %d",sum);
    return 0;
}
