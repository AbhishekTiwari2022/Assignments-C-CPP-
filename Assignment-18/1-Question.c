#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 value in the array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];

    }
    printf("Sum of number stored in array is : %d",sum);
    return 0;
}
