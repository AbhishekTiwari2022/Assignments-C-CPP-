//12. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>
int main()
{
    int x,temp,r;
    printf("Enter Any Three Digit Number : ");
    scanf("%d",&x);
    temp=x/10;
    r=x%10;
    x=r*100+temp;
    printf("%d",x);
    return 0;
}
/*
    output 123=321
    temp=x/10
    temp=12
    r=r%10
    r=3

    3*100+12=300+12=312

*/
