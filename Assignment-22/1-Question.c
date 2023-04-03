#include<stdio.h>
int cal_length_string(char str[]);
int main()
{
  char str[20];
  int k;
  k=cal_length_string(str);
  printf("Length Is : %d",k);
}
int cal_length_string(char str[])
{
    int i;
    printf("Enter A String : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++);
    return i;
}
