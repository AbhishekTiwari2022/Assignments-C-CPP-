//7. Write a program to print all Prime numbers between two number.

#include<stdio.h>
int main()
{
    int a,b,i,l;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    for(l=a;l<=b;l++)
    {
        for(i=2;i<l;i++)
            if(l%i==0)
                break;
        if(i==l)
            printf("%d ",l);

    }
    return 0;
}
