
#include<stdio.h>
int main()
{
    int a[10],i,max,second_max;
    float avg;
    printf("Enter 10 value in the array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1])
    {
        max=a[0];
        second_max=a[1];
    }
    else
    {
        max=a[1];
        second_max=a[0];
    }

    for(i=2;i<=9;i++)
    {
        if(a[i]>max)
        {
           second_max=max;
           max=a[i];
        }
        else
        {
           if(a[i]>second_max)
                second_max=a[i];
        }

    }
    printf("Second largest number in array is : %d\n",second_max);

    return 0;
}


