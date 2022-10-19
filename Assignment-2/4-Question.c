//4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int x=11,y=10;
    printf("X = %d And Y = %d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Swapping Result : ");
    printf("X = %d And Y = %d",x,y);
    return 0;
}

