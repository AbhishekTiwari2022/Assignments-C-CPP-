
#include<stdio.h>
int main()
{
    int a[10],i,max=0;
    float avg;
    printf("Enter 10 value in the array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]>max)
        {
           max=a[i];
        }

    }
    printf("Greatest number stored in array is : %d\n",max);

    return 0;
}


