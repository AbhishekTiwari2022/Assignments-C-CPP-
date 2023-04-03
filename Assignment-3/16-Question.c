//16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter A Character : ");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    {
        printf("character is an lowercase");
    }
    else if(ch>=65 && ch<=90)
    {
        printf("character is an uppercase");
    }
    else if(ch>=0 && ch<=9)
    {
       printf("character is an digit");
    }
    else
    {
       printf("character is an special character");
    }
    return 0;
}

