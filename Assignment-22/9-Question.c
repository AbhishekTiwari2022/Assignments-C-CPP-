#include<stdio.h>
int find_char_at_specified_index(char str[],int t);
int main()
{
    char str[20]="Abhishek",c;
    int t=2;
    c=find_char_at_specified_index(str,t);
    printf("%c",c);
    return 0;

}


int find_char_at_specified_index(char str[],int t)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(i==t)
            return str[i];
    }

}
