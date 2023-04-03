#include<stdio.h>
int main()
{
    char str[20];
    int i,l;
    printf("Enter A String : ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    l=strlen(str);
    for(i=l-1;i>=0;i--)
        printf("%c",str[i]);
    return 0;
}

