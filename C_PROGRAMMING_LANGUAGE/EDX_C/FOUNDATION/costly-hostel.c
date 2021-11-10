
#include <stdio.h>
/**
 * One room costs nothing if you are 60 (the age of the innkeeper), or 5 dollars if you are less than 10 years old
 * For everyone else, the cost is 30 dollars plus an additional 10 dollars if you bring more than 20 pounds of luggage.
 * Your program should read the customer's age first, then the weight of their luggage, then output the price they have to pay.
 * 
 */
int main(void)
{
    int age;
    int weight;
    int price;
    scanf("%d %d", &age, &weight);
    if (age == 60)
    price = 0;
    else 
    price = 30;
    
    if (age < 10)
    price = 5;
    else 
    price = 30;
    
    if (weight > 20)
    {
        price = price + 10;
        printf("%d", price);
    }
}