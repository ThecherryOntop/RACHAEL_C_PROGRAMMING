#include <stdio.h>
/**
 * While purchasing certain items, a discount of 10% is 
 * offered if the quantity purchased is more than 1000. 
 * If quantity and price per item are input 
 * through the keyboard, write a program to
 * calculate the total expenses.
 * Return: 0;
 */
int main(void)
{
    int quantity;
    int dis = 10;
    float pricePerItem;
    float totalExpense;
    scanf("%d%f", &quantity, &pricePerItem);
    if (quantity > 1000){

        totalExpense = (quantity * pricePerItem) - (quantity * pricePerItem * dis / 100); 
         printf("totalExpense; %.2f\n", totalExpense);
    }
     
    return 0;
}