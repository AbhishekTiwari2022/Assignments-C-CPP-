#include<stdio.h>
int main()
{
    int a[10],i,min,second_min;
    float avg;
    printf("Enter 10 value in the array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]<a[1])
    {
        min=a[0];
        second_min=a[1];
    }
    else
    {
        min=a[1];
        second_min=a[0];
    }
    for(i=2;i<=9;i++)
    {
        if(a[i]<min)
        {
            second_min=min;
            min=a[i];
        }
        else
        {
            if(a[i]<second_min)
                second_min=a[i];
        }
    }
    printf("Second smallest value in array is : %d ",second_min);
    return 0;
}
