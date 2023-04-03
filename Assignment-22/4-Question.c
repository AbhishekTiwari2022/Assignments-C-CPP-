#include<stdio.h>

void strupper(char str[]);
int main()
{
        char str1[10]="abhi";
        strupper(str1);
        return 0;
}
void strupper(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    printf("%s",str);
}
