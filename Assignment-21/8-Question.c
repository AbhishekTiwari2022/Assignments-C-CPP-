#include<stdio.h>
int main()
{
   char str[20];
   int i,alpha=0,digit=0,sp=0;
   printf("Enter A String : ");
   gets(str);
   for(i=0;str[i];i++)
   {
       if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
            alpha++;
        else if(str[i]>='0' && str[i]<='9')
            digit++;
        else
            sp++;
   }
   printf("Number of alphabet in this string is : %d\n",alpha);
   printf("Number of digit in this string is : %d\n",digit);
   printf("Number of special character in this string is : %d",sp);
   return 0;
}
