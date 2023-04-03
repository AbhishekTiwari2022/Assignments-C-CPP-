#include<stdio.h>
int count_count(char str[]);

int main()
{
    char str[20]="Abhishek";
    int v;
    v=count_count(str);
    printf("Number of vovel in given string is : %d",v);
}
int count_count(char str[])
{
    int vovel=0,i;
    for(i=0;str[i];i++)
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            vovel++;
    return vovel;
}
