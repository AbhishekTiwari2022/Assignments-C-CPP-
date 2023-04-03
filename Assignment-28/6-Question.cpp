#include<stdio.h>

int findN(int n,int a,int b,int c)
{
    if(n==1)
        return a;
    if(n==2)
        return b;
    if(n==3)
        return c;
    return findN(n-1,a,b,c)+findN(n-2,a,b,c)+findN(n-3,a,b,c);
}
void f1()
{
    int n,a,b,c;
    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",findN(n,a,b,c));
}
int main()
{
    f1();
    return 0;
}
