#include<stdio.h>
void all_armstrong_number_btw_two_number(int a,int b);
int main()
{
    int a=1,b=200;
    all_armstrong_number_btw_two_number(a,b);
    return 0;
}
void all_armstrong_number_btw_two_number(int a,int b)
{
    int x,r,sum=0,temp,num;

    for(x=a;x<=b;x++)
    {
        num=x;
        temp=x;
        while(num!=0)
        {
          r=num%10;
          sum=sum+(r*r*r);
          num=num/10;

        }
        if(sum==temp)
            printf("%d ",x);
        sum=0;
    }
}
