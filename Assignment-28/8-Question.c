#include<stdio.h>
int* removeDuplicateArray(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
               for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }

        }
    }
    for(i=0;i<n;i++)
        return a[i];
}
int main()
{
    int arr[]={1,2,1,3,2,1};
    int k;
    k=removeDuplicateArray(arr,6);
    printf("%d",k);
    return 0;
}
