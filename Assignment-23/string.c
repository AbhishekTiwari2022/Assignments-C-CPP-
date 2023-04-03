#include<stdio.h>
#include<string.h>
void chk_palindrome_string(char str[]);
int count_word(char str[]);
char* trimleading(char s[]);
void rev_string_word_wise(char str[]);
void reverse_string_word_wise(char str[]);
int find_word(char str[],char s);
void count(char str[]);

int main()
{
    char str[30]="  ab  d c ";

    printf("Total Words Are : %d",count_word(str));

    printf("\n");
    return 0;

}
void chk_palindrome_string(char str[])
{
    char str1[20];
    int i,l;
    for(i=0;str[i];i++)
        str1[i]=str[i];
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        str[i];
    }

    if(!strcmp(str,str1))
        printf("String is palindrome");
    else
        printf("String is not palindrome");


}


char* trimleading(char s[])
{
	int i=0,j,k,c=0;
	for(k=strlen(s)-1;s[k]==' ';k--);
        c++;
    k=strlen(s);

	while(s[i]==' ')
        i++;
    for(j=0;s[j+i];j++)
        s[j]=s[i+j];
    s[k-c-i]='\0';
    return s;
}

int count_word(char str[])
{
    int i,c=0;
    trimleading(str);
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            if(str[i]==str[i+1])
                continue;
            else
                 c++;
        }
    }
    return c+1;
}

void rev_string_word_wise(char str[])
{
    int i,l,j;
    char str1[30];
    l=strlen(str);
    for(i=l-1;i>=0;i--)
        printf("%c",str[i]);
}
void reverse_string_word_wise(char str[])
{
    int i,j,nullfound=0;
    for(i=0,j=0;str[j];)
    {
        while(str[j]!=' ')
        {
            if(str[j]=='\0')
            {
               nullfound++;
               break;
            }
            j++;
        }
        rev_string_word_wise(str);
        i=j+1;
        if(nullfound==0)
            j++;
    }
    rev_string_word_wise(str);
    printf("%s",str);
}
void count(char str[])
{
    int c=0,i,j;
    for(i=0;str[i];i++)
    {
        c=1;
        if(str[i])
        {
            for(j=i+1;j<str[j];j++)
            {
                if(str[i]==str[j])
                {
                    c++;
                    str[j]='\0';
                }
            }
            printf("Frequency of '%c' is %d\n",str[i],c);
        }
    }
}
int find_word(char str[],char s)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(s==str[i])
            return s;
        else
            printf("Not Present");
    }
}
