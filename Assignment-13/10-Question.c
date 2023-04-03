#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
        int ch,a,b,L,sum=0,V;
        printf("1.  LCM of two number \n");
        printf("2.  Sum of digits \n");
        printf("3.  Volume of cuboid\n");
        printf("4.  Check prime or not\n");
        printf("5.  Exit \n");
        printf("Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter two number : ");
                scanf("%d %d",&a,&b);
                for(L=a>b?a:b;L<=a*b;L++)
                    if(L%a==0&&L%b==0)
                        break;

                    printf("LCM is %d \n",L);
                break;
            case 2:
                printf("Enter any number : ");
                scanf("%d",&a);
                while(a!=0)
                {
                  b=a%10;
                  sum=sum+b;
                  a=a/10;
                }
                printf("Sum of digit is : %d",sum);
                break;

            case 3:
                printf("Enter length breadth and height : ");
                scanf("%d %d %d",&a,&b,&L);
                V=a*b*L;
                printf("Volume of cuboid is %d \n",V);
                break;

            case 4:
                printf("Enter any number \n");
                scanf("%d",&b);
                for(a=2;a<=b;a++)
                    if(b%a==0)
                        break;
                if(a==b)
                    printf("%d is prime number \n",b);
                else
                    printf("%d is not prime number \n",b);
                break;
            case 5:
                exit(0);
            default :
                    printf("Invalid Choice");
        }
    }
    return 0;
}


