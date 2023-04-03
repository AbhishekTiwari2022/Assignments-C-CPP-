#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any Character : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a' ... 'z':
            printf("Uppercase");
            break;
        case 'A' ... 'Z':
            printf("Lowercase");
            break;
        default:
            printf("Some Other Alphabet");
    }
    return 0;
}

