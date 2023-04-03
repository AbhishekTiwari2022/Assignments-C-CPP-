#include<stdio.h>
void f1(int a[]);
int main()
{
    int a[]={1,4,5,3,4,1,2,5,3,4,5};
    f1(a);
    return 0;
}
void f1(int a[])
{
    int hash[100]={0};
    int i;
    for(i=0;i<11;i++)
    {
        hash[a[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(hash[i] != 0)
        {
            printf("%d --> %d\n",i,hash[i]);
        }
    }
}
