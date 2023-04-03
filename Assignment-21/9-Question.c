#include<stdio.h>
int main()
{
    char str[20]="Abhi";
    char str1[20];
    int i;
    for(i=0;str[i];i++)
        str1[i]=str[i];
    printf("%s",str1);
}
