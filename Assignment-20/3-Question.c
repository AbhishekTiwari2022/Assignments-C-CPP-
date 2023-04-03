#include<stdio.h>
int main()
{
    int a[3][3]={{2,5,6},{8,3,2},{1,6,2}};
    int b[3][3],i,j;

    printf("Transpose of three array is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }

        printf("\n");
    }

}

