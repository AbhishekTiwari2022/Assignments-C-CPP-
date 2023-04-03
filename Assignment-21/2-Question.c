#include<stdio.h>
int main()
{
    char str[10]={'A','B','A','C'},t='B';
    int i,c=0;
    for(i=0;str[i];i++)
        if(t==str[i])
            c++;
    printf("%d",c);
    return 0;
}
