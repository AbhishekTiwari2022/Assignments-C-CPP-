//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    float cprice,sprice,profitorloss;
    printf("Enter Cost Price And Selling Price Of A Product : ");
    scanf("%f %f",&cprice,&sprice);
    profitorloss = (sprice-cprice)/100*100;
    printf("profit or loss percentage is %.2f",profitorloss);
    return 0;
}
