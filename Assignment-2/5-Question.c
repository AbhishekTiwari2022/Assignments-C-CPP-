//5. Write a program to input a three digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter Three Digit Of Any Number : ");
    scanf("%d",&n);
    sum =n%10 + (n/10)%10 + (n/100);
    printf("%d",sum);
    return 0;
}

