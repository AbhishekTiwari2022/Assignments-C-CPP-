#include<stdio.h>
void swap_array(int a[],int i1,int i2);

int main()
{
    int a[5]={10,20,30,40,50},i1=2,i2=3;
    swap_array(a,i1,i2);
    return 0;
}
void swap_array(int a[],int i1,int i2)
{
    int t,i;

         t=a[i1];
         a[i1]=a[i2];
         a[i2]=t;

    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
}
