//7. Write a program to check whether the given number is even or odd using a bitwise operator


#include<stdio.h>
int main()
{
    int x;
    printf("Enter Number : ");
    scanf("%d",&x);
    if(x&1)
    {
        printf("%d Is An Odd Number",x);
    }
    else
    {
       printf("%d Is An Even Number",x);
    }
    return 0;
}

/* suppose x=2
binary 2= 010
            1
        ------
          000
        ------
suppose x=3
binary 3= 011
          001
        ------
          001 */

