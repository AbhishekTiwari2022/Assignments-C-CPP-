#include<stdio.h>
void swap_two_char_at_specified_index(char str[],int t1,int t2);
int main()
{
    char str[20]="ABHISHEK";
    int t1=2,t2=3;
    swap_two_char_at_specified_index(str,t1,t2);
    return 0;
}

void swap_two_char_at_specified_index(char str[],int t1,int t2)
{
    int i,temp;
    for(i=0;str[i];i++)
    {
        if(t1==i)
        {
            temp=str[i+1];
            str[i+1]=str[i];
        }
        if(t2==i)
        {
            str[i-1]=temp;
        }
    }
    printf("%s",str);
}
