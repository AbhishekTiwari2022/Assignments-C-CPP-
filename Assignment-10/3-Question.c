//3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
int main()
{
    int a=-1,b=1,c,i,chknm;

    //printf("Enter How Many Terms You Want To Print The Fibonacci Series : ");
    //scanf("%d",&n);

    printf("Enter Number To Check It Is Present in the Fibonacci Series Or Not : ");
    scanf("%d",&chknm);
    for(i=0;;i++)
    {
        c=a+b;

        if(c==chknm)
        {
            printf("%d is %d term in the series",chknm,i);
            break;
        }
        if(c>chknm)
        {
            printf("%d is %d is not in the series",chknm);
        }

        a=b;
        b=c;
    }

    return 0;
}
