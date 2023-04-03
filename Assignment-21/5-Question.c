#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter A String : ");
    fgets(str,20,stdin);
    str[i-1]='\0';
    for(i=0;str[i];i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;

    printf("%s",str);
}
