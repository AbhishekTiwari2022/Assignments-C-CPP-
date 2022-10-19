//3. Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int x=11,y=10,temp;
    printf("X = %d And Y = %d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("Swapping Result : ");
    printf("X = %d And Y = %d",x,y);
    return 0;
}
