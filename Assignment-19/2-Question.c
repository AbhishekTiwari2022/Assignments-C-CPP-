#include<stdio.h>
int smallest_array_element(int a[],int n);
int main()
{
    int a[10],c;
    c=smallest_array_element(a,10);
    printf("Smallest Element In Array Is : %d",c);
    return 0;
}
int smallest_array_element(int a[],int n)
{
    int min,i;
    printf("Enter %d Number : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i+1]<min)
            min=a[i+1];
    }
    return min;
}
