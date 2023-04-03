#include<stdio.h>
int main()
{
    char str[10]={'M','A','H','I'};
    int i;
    for(i=0;str[i];i++);

    printf("String Length : %d",i);
    return 0;
}
