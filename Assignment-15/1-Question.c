#include<stdio.h>
int find_Lcm(int a,int b);
int main()
{
    int a,b,c;
    c=find_Lcm(6,8);
    printf("%d",c);
    return 0;
}
int find_Lcm(int a,int b)
{
    int L;
    for(L=a>b?a:b;L<a*b;L++)
        if(L%a==0 && L%b==0)
            break;
    return L;
}
