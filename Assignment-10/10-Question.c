//10. Write a program to all prime number under 1000.

#include<stdio.h>
int main()
{
    int x,r,sum=0,tmp,l=0,u=100;
    printf("Enter A Number : ");
    scanf("%d",&x);
    tmp=x;
    for(x=l;x<=u;x++)
    {
        while(x!=0)
        {
            r=x%10;
            sum=sum+r*r*r;
            x=x/10;
        }
    }

    if(tmp==sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
