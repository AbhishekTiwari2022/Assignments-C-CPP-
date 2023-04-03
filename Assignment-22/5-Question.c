#include<stdio.h>

void strlower(char str[]);
int main()
{
        char str1[10]="ABHI";
        strlower(str1);
        return 0;
}
void strlower(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("%s",str);
}

