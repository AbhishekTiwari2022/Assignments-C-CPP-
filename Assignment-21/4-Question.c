#include<stdio.h>
int main()
{
    char str[10]={' ','B',' ',' '},t=' ';
    int i,c=0;
    for(i=0;str[i];i++)
        if(t==str[i])
            c++;
    printf("Total Number Of Spaces Are : %d",c);
    return 0;
}

