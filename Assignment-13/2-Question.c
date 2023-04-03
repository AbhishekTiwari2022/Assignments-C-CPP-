#include<stdio.h>
int main()
{
    int ch,a,b;
    printf("1.  Addition \n");
    printf("2.  Subtraction \n");
    printf("3.  Multiplication \n");
    printf("4.  Division \n");

    printf("Enter Your Choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
                printf("Enter Two Numbers 1: ");
                scanf("%d %d",&a,&b);
                printf("Addition Of %d And %d Is : %d",a,b,a+b);
                break;
        case 2:
                printf("Enter Two Numbers 1: ");
                scanf("%d %d",&a,&b);
                printf("Subtraction Of %d And %d Is : %d",a,b,a-b);
                break;
        case 3:
                printf("Enter Two Numbers 1: ");
                scanf("%d %d",&a,&b);
                printf("Multiplication Of %d And %d Is : %d",a,b,a*b);
                break;
        case 4:
                printf("Enter Two Numbers 1: ");
                scanf("%d %d",&a,&b);
                printf("Division Of %d And %d Is : %d",a,b,a/b);
                break;

        default :
                printf("Invalid Choice");
    }
    return 0;
}

