#include<stdio.h>
int find_char(char str[],char s);
int main()
{
    char str[20]="Hello World";
    char v='v';
    int k;
    k=find_char(str,v);
    if(k)
        printf("The first occurrence of the search element %c is at position : %d",v,k);
    else
        return 0;
}

int find_char(char str[],char s)
{
    int i,count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]==s)
        {
            count++;
        }
    }
    return count;
}
