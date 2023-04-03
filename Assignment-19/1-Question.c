#include<stdio.h>
int gretest_array_element(int a[],int n);
int main()
{
    int a[10],c;
    c=gretest_array_element(a,10);
    printf("Greatest Number Is : %d",c);
    return 0;
}
int gretest_array_element(int a[],int n)
{
    int max,i;
    printf("Enter %d number : ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<=n;i++)
    {
        if(a[i+1]>max)
            max=a[i+1];
    }
    return max;
}
