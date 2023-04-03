#include<stdio.h>
int main()
{
    int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    int b[3][3]={{1,1,1},{1,1,1},{1,1,1}},i,j,c[3][3],sum,k;

    printf("Multipication of three array is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
