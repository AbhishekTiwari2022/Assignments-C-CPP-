#include<stdio.h>
int main()
{
    int a[10],i,max,second_max,third_max;
    printf("Enter 10 values in array : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    if(a[0]>a[1]&&a[0]>a[2])
    {
        max=a[0];
        if(a[1]>a[2])
        {
            second_max=a[1];
            third_max=a[2];
        }
        else
        {
             second_max=a[2];
             third_max=a[1];
        }
    }
    else
    {
        if(a[1]>a[2])
        {
            max=a[1];
        }
        else
        {
            max=a[2];
        }
    }

}
