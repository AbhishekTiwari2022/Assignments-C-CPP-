#include<stdio.h>
#include<string.h>
int cmp_string(char str[],char str1[]);
int main()
{
    char str[10]="abhishek";
    char str1[10]="abhimanyu";
    int k;
    k=strcmp(str,str1);
    printf("%d",k);
    return 0;
}
int cmp_string(char str[],char str1[])
{
    return strcmp(str,str1);
}
