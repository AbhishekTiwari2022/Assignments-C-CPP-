#include<stdio.h>
#include<math.h>
struct triangle
{
    float a,b,c;
};
float getArea(struct triangle tri)
{
    float area,s;
    s=(tri.a+tri.b+tri.c)/2
    area=sqrt(s*(s-tri.a)*(s-tri.b)*(s-tri.c));
    return area;
}
triangleSort(struct triangle t[],int n)
{
    int r,i;
    struct triangle temp;
    for(r=1;r<n-1;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(getArea(t[i])>getArea(t[i+1]))
            {
                temp=t[i];
                t[i]=t[i+1];
                t[i+1]=temp;
            }
        }
    }
}
void printTriangle(struct triangle tri)
{
    printf("(%f,%f,%f)",tri.a,tri.b,tri.c);
}
void f1()
{
    int n,i;
    scanf("%",&n);
    struct t[n];
    for(i=0;i<n;i++)
    {
        scanf("%f %f %f",&t[i].a,&t[i].b,&t[i].c);
    }
    triangleSort(t,n);
    for(i=0;i<n;i++)
        printTriangle(t[i]);
}
