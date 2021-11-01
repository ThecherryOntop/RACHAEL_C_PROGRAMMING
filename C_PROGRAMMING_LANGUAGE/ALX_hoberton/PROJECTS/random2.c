#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations for  single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to console
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	while (i <= 9)
	{
		putchar (i + '0');
		i++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return 0;


	return (0);
}