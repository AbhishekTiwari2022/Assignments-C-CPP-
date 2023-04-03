//6. Write a program to print greater between two numbers. Print one number if both are the same.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("Greater Is %d",a);
    }
    else
    {
        printf("Greater Is %d",b);
    }
    return 0;
}
