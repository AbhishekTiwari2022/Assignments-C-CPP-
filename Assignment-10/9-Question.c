//9. Write a program to check whether a given number is an Armstrong number or not.

#include<stdio.h>
int main()
{
    int x,r,sum=0,tmp;
    printf("Enter A Number : ");
    scanf("%d",&x);
    tmp=x;
    while(x!=0)
    {
        r=x%10;
        sum=sum+r*r*r;
        x=x/10;
    }
    if(tmp==sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
//123
