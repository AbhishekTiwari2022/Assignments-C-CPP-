#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
        int ch,n,f,i,sum=0;
        float a;
        printf("1.  Factorial of a number \n");
        printf("2.  Check even and odd \n");
        printf("3.  Area of circle \n");
        printf("4.  Sum of first natural numbers \n");
        printf("5.  Exit \n");
        printf("Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter any number : ");
                scanf("%d",&n);
                f=1;
                for(i=1;i<=n;i++)
                    f=f*i;
                printf("Factorial of %d is %d \n",n,f);
                break;
            case 2:
                printf("Enter any number : ");
                scanf("%d",&n);
                if(n%2==0)
                {
                     printf("%d is an even number \n",n);
                }
                else
                {
                    printf("%d is an odd number \n",n);
                }
                break;

            case 3:
                printf("Enter radius : ");
                scanf("%d",&n);
                a=3.14*n*n;
                printf("Area of circle is %f \n",a);
                break;

            case 4:
                printf("Enter any number \n");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                    sum=sum+i;
                printf("Sum of natural number is : %d \n",sum);
            case 5:
                exit(0);
            default :
                    printf("Invalid Choice");
        }
    }
    return 0;
}

