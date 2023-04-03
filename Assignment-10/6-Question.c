//6. Write a program to print all Prime numbers under 100.
#include<stdio.h>
int main()
{
    int x,i,l=2,u=100;

    for(x=l;x<=u;x++)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            break;
        }
        if(i==x)
            printf("%d ",x);
    }

    return 0;
}
