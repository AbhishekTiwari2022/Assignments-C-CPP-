#include<stdio.h>
#include<string.h>
void reverse_string(char str[]);

int main()
{
    char str[20];
    reverse_string(str);
    return 0;
}
void reverse_string(char str[])
{
    int i,l;
    printf("Enter String : ");
    fgets(str,20,stdin);
    str[strlen(str)-1];
    l=strlen(str);
    for(i=l-1;i>=0;i--)
        printf("%c",str[i]);

}
