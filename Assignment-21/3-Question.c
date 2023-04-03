#include<stdio.h>
int main()
{
    char str[10]={'A','B','A','C','a','I','e'};
    int i,v=0;
    for(i=0;str[i];i++)
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            v++;
    printf("%d",v);
    return 0;
}

