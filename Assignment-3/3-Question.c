//3. Write a program to check whether a given number is an even number or an odd number


#include<stdio.h>
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Number Is Even");
    }
    else
    {
        printf("Number Is Odd");
    }
    return 0;
}
