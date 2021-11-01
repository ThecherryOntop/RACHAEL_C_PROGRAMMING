#include <stdio.h>
/* A c program that reads and prints number of books purchased */
int main(void)
{
    double amount;
    double price;
    int numberOfBooks;
    scanf("%f %f", &amount, &price);
    numberOfBooks = (double) amount / price;
    printf("%d", numberOfBooks);
    return 0;
}