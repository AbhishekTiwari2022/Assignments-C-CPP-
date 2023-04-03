//8. Write a program to print next Prime number.
#include<stdio.h>
int main()
{
    int x,i,l;
    printf("Enter A Number : ");
    scanf("%d",&x);
    for(l=x+1;;l++)
    {
        for(i=2;i<l;i++)
        {
            if(l%i==0)
                break;
        }
        if(i==l)
        {
            printf("%d ",l);
            break;
        }

    }
    return 0;
}
/* x=11 Ans 13 */
