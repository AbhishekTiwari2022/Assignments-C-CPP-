#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
        int ch,a,b,c;
        printf("1.  Check Isosceles Triangle \n");
        printf("2.  Check Right Triangle \n");
        printf("3.  Check Equilateral Triangle \n");
        printf("4.  Exit \n");
        printf("Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter lengths of sides an triangle : ");
                scanf("%d %d %d",&a,&b,&c);
                if(a+b>c&&b+c>a&&c+a>b)
                {
                   if(a==b||b==c||c==a)
                        printf("\n It is an Isosceles Triangle");
                   else
                       printf("\n It is not an Isosceles Triangle");
                }
                else
                {
                    printf("\n It is not a valid triangle");
                }
                break;
            case 2:
                printf("Enter lengths of sides an triangle : ");
                scanf("%d %d %d",&a,&b,&c);
                if(a+b>c&&b+c>a&&c+a>b)
                {
                   if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
                        printf("\n It is an Right Triangle");
                   else
                       printf("\n It is not an Right Triangle");
                }
                else
                {
                    printf("\n It is not a valid triangle");
                }
                break;

            case 3:
                printf("Enter lengths of sides an triangle : ");
                scanf("%d %d %d",&a,&b,&c);
                if(a+b>c&&b+c>a&&c+a>b)
                {
                   if(a==b&&b==c)
                        printf("\n It is an Equilateral Triangle");
                   else
                       printf("\n It is not an Equilateral Triangle");
                }
                else
                {
                    printf("\n It is not a valid triangle");
                }
                break;
            case 4:
                exit(0);
            default :
                    printf("Invalid Choice");
        }
    }
    return 0;
}
