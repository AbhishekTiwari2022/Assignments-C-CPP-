#include<stdio.h>
void sort_array(int a[],int n);
int main()
{
    int a[100],n;
    printf("Enter size of element : ");
    scanf("%d",&n);
    sort_array(a,n);
    return 0;
}
void sort_array(int a[],int n)
{
    int temp,i,r;
    printf("Enter %d Number : ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(r=1;r<=n;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }


}
