#include <stdio.h>
/**
 * The if statement with an else clause
 * A program to determine if number is even or odd
 *  @brief 
 * 
 */
int main(void)
{
    int number_to_test, remainder;

    printf("Enter your number to be tested: ");
    scanf("%d, &number_to_test");
    remainder = number_to_test % 2;

    if (remainder == 0){
        printf("The number is even.\n");
    }
    else {
        printf("The number is an odd number\n");
    }
    return (0);
}
