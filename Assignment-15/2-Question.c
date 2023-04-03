#include<stdio.h>
int find_Hcf(int a,int b);
int main()
{
    int a,b,c;
    c=find_Hcf(8,12);
    printf("HCF is %d",c);
    return 0;
}
int find_Hcf(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0&&b%H==0)
            break;
    return H;
}
