#include<stdio.h>
int main()
{
    int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    int b[3][3]={{1,1,1},{1,1,1},{1,1,1}},i,j,c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }

    }
    printf("Sum of two array is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");

    }

}
