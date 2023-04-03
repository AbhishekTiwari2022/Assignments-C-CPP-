#include<stdio.h>
float power(float x,float y);
int main()
{
    printf("%f",power(2,-3));
}
float power(float x,float y)
{
    if(y==0)
        return 1;
    if(y>0)
        return x*power(x,y-1);
    if(y<0)
        return power(x,y+1)/x;
}
