#include<stdio.h>
int count_total_duplicate_value_in_array(int a[],int n);
int main()
{
    int a[10],d;
    d=count_total_duplicate_value_in_array(a,10);
    printf("%d",d);
    return 0;
}
int count_total_duplicate_value_in_array(int a[],int n)
{
    int i,j,c=0;
    printf("Enter %d Number : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    sort_array(a,n);
    i=0;
    j=1;
    while(i<=n-2)
    {
        if(a[i]==a[j])
            c++;
        while(a[i]==a[j])
            j++;
        i=j;
        j=j+1;
    }
    return c;
}
void sort_array()
{
    int a[10],i,temp,r;

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

}
