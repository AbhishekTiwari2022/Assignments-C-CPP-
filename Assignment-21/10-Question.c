#include<stdio.h>
int main()
{
    char str[20],c;
    int i,count=0;
    printf("Enter a string : ");
    gets(str);
    printf("Enter the character that you want to search for : ");
    scanf("%c",&c);
    for(i=0;str[i];i++)
    {
        if(str[i]==c)
            count++;
    }
    printf("The first occurrence of the search element %c is at position %d",c,count);
    return 0;
}
