#include<stdio.h>
void rotate_arrar(int a[],int size,int n,int d);
int main()
{
    int a[5],n=2,d=1;
    rotate_arrar(a,5,n,d);
    return 0;
}
void rotate_arrar(int a[],int size,int n,int d)
{
   int temp,i;
   printf("Enter %d Number : ",size);
   for(i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
   if(d==1)
   {
      while(n)
      {
           temp=a[size-1];
           for(i=size-2;i>=0;i--)
                a[i+1]=a[i];
            a[0]=temp;
            n--;
      }

   }
   else
   {
       while(n)
       {
           temp=a[0];
           for(i=1;i>=size-1;i++)
                a[i-1]=a[i+1];
            a[size-1]=temp;
            n--;
       }
   }
   for(i=0;i<size;i++)
   {
       printf("%d ",a[i]);
   }
}
