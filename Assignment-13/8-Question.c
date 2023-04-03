#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any Character : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a' ... 'z':
            printf("Lowercase");
            break;
        case 'A' ... 'Z':
            printf("Uppercase");
            break;
        default:
            printf("Some Other Alphabet");
    }
    return 0;
}
