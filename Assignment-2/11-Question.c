//11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>

int main()
{
    float INR;
    float usd=76.23;
    printf("Enter INR : ");
    scanf("%f",&INR);
    usd=INR/usd;
    printf("%f ",usd);
    return 0;
}


