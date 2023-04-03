//8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(n==i)
    {
        printf("Number Is Prime");
    }
    else
    {
        printf("Number Is Not Prime");
    }

    return 0;
}

//1,3,5,7,11,
