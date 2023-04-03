#include<stdio.h>
void chk_alphanumeric(char str[]);
int main()
{
   char str[20]="abhi";
   chk_alphanumeric(str);
}

void chk_alphanumeric(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) && ((str[i]>='0' && str[i]<='9')))
            break;

    }
    if(i=='\0')
        printf("No given string is not alphanumeric");

    else


}
