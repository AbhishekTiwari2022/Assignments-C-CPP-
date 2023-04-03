#include<stdio.h>
#include<string.h>
void store_multi_string(char str[100][30]);
void f2();
void f3();
void remove_duplicate_names(char str[5][30]);
int main()
{
    char str[5][30];
    remove_duplicate_names(str);
    return 0;
}
void store_multi_string(char str[][30])
{
    int i,n;
    printf("Enter Size : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        fgets(str[i],30,stdin);
        str[i][strlen(str[i])-1]='\0';
    }
    for(i=0;i<=n;i++)
    {
       printf("%s\n",str[i]);
    }
}
void f2()
{
    char str[5][30];
    int i,j,c=0;
    printf("Enter 5 strings : ");
    for(i=0;i<5;i++)
    {
        fgets(str[i],30,stdin);
        str[i][strlen(str[i])-1]='\0';
    }
    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j];j++)
        {
            if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U')
            {
                c++;
            }
        }
    }
    printf("Number Of Vovels Are : %d",c);
}
void f3()
{
   char str[5][30],s[30];
    int i,j;
    printf("Enter 5 city name : ");
    for(i=0;i<5;i++)
    {
        fgets(str[i],30,stdin);
        str[i][strlen(str[i])-1]='\0';
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(s,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],s);
            }
        }
    }
    printf("\nSorted city name \n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",str[i]);
    }
}
void remove_duplicate_names(char str[3][30])
{
   int i,j;
   printf("Enter 3 string : ");
   for(i=0;i<3;i++)
   {
       fgets(str[i],30,stdin);
       str[i][strlen(str[i])-1]='\0';
   }
    printf("\n");
   for(i=0;i<3;i++)
   {
       for(j=i+1;j<3;j++)
       {
           if(strcmp(str[i],str[j])==0)
           {
               strcpy(str[i],str[j]);
               strcpy(str[j],str[j+1]);
           }
       }
   }
   for(i=0;i<3;i++)
   {
       printf("%s\n",str[i]);
   }


}
