//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots


#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("Enter Value Of A B And C : ");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("quadratic equation are real & distinct roots");
    }
    else if(d==0)
    {
        printf("quadratic equation are real & equal roots");
    }
    else
    {
       printf("quadratic equation are real & imaginary roots");
    }
    return 0;
}
