//5. Write a program to check whether two given number are co-prime number or not.

#include<stdio.h>
int main()
{
    int x,y,H;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    for(H=x<y?x:y;H>=1;H--)
    {
        if(x%H==0&&y%H==0)
            break;
    }
    if(H==1)
    {
        printf("Number Are Co-Prime");
    }
    else
    {
        printf("Number Are Not Co-Prime");
    }
    return 0;
}
/*
    if HCF of x and y is 1,then x&y is coprime
        exp=    8   15

                8   15
                4   5
                2   3
                1   1
*/
