#include<stdio.h>
int main()
{
    int a[10],i,b[10];
    float avg;
    printf("Enter 10 value in the array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        b[i]=a[i];
    }
     for(i=0;i<=9;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
