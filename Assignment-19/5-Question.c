#include<stdio.h>
int first_adjacent_duplicate_value_in_array(int a[],int n);

int main()
{
  int a[10],c;
  c=first_adjacent_duplicate_value_in_array(a,10);
  printf("%d",c);
  return 0;
}


int first_adjacent_duplicate_value_in_array(int a[],int n)
{
    int i;
    printf("Enter %d Number : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(a[i]==a[i+1])
            break;
    }
    return a[i];
}
