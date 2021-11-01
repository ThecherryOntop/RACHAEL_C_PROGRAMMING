#include <stdio.h>
/**
 * If cost price and selling price of an item are input through the keyboard,   
 * write a program to determine whether the seller has made profit or incurred loss. 
 * Also determine how much profit he made or loss he incurred.
 * 
 * Return: 0 
 */
int main()
{
    int costPrice;
    int sellPrice;
    int profits;
    printf("Enter cost price, and selling price:");
    scanf("%d %d", &costPrice, &sellPrice);
    if (costPrice < sellPrice){
         profits = sellPrice - costPrice;
        printf("The seller made profits of  %d", profits);
    }
    else 
    printf("losses incured is: %d", profits);   
    return 0;
}