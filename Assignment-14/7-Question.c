#include<stdio.h>
int fact(int n);
int combi(int n,int r);
int permu(int n,int r);
void print_prime_factor(int n);
int is_number_contains_digit(int n,int d);
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    printf("%d \n",combi(4,2));
    printf("%d\n",permu(4,2));
    print_prime_factor(n);

    /*if(is_number_contains_digit(n,2))
        printf("Yes %d contains 2",n);
    else
        printf("No %d is not contain 2",n);*/

    return 0;
}
int combi(int n,int r)
{
    return fact(n)/fact(r)/fact(n-r);
}
int permu(int n,int r)
{
   return fact(n)/fact(n-r);
}
int fact(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}
int is_number_contains_digit(int n,int d)
{
    while(n)
    {
        if(n%10==d)
            return 1;
        n=n/10;
    }
    return 0;
}
void print_prime_factor(int n)
{
    int i=2;
    while(n>1)
    {

        while(n%i==0)
        {
            printf("%d",i);
            n/=i;
        }
        i++;
    }

}
