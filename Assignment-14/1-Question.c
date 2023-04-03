#include<stdio.h>
float area_circle(int);

int main()
{
    area_circle(2);
    return 0;
}
float area_circle(int r)
{
    float a;
    a=3.14*r*r;
    printf("Area Of Circle Is %.2f: ",a);
    return a;
}
