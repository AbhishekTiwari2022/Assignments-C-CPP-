//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter A Alphabet : ");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    {
        printf("Alphabet is in lowercase");
    }
    if(ch>=65 && ch<=90)
    {
        printf("Alphabet is in uppercase");
    }
    return 0;
}
