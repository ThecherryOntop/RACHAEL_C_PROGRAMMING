#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The entry point
 * Description - A program that prints a positive or negative value each time it is run.
 * 
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    if (n > 0)
    printf("%d is positive", n);
    else if (n == 0)
    printf("%d is zero", n);
    else 
    printf("%d is negative", n);
	return (0);
}