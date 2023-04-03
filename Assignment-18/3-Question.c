
#include<stdio.h>
int main()
{
    int a[10],i,sumeven=0,sumodd=00;
    float avg;
    printf("Enter 10 value in the array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            sumeven=sumeven+a[i];
        else
            sumodd=sumodd+a[i];
    }
    printf("Sum of all even number stored in array is : %d\n",sumeven);
    printf("Sum of all odd number stored in array is : %d",sumodd);

    return 0;
}

