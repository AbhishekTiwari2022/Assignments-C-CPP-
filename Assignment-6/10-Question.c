//10. Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter Number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }


    printf("reverse of given number is %d",sum);
    return 0;
}
//123=321  0+30,30+20

