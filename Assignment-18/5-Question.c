
#include<stdio.h>
int main()
{
    int a[10],i,min;
    float avg;
    printf("Enter 10 value in the array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]<min)
        {
           min=a[i];
        }

    }
    printf("Smallest number stored in array is : %d\n",min);

    return 0;
}



