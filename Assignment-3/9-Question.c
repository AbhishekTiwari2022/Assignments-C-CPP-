//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("Greater Is %d",a);
    }
    else if(b>c)
    {
        printf("Greater Is %d",b);
    }
    else
    {
        printf("Greater Is %d",c);
    }
    return 0;
}

