
#include<stdio.h>
int main()
{
    int a[10],i,temp,r;
    printf("Enter 10 value in the array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d\n",&a[i]);
    }


    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
    }
   printf("----------Sorted Array----------\n\n");
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}



