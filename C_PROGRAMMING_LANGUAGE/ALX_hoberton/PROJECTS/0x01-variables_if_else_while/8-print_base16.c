#include <stdio.h>
#include <stdlib.h>
/**
 * Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * 
 * Return: 0
 */
int main(void)
{
    int num = 0;
    while (num <= 9)
    {
        putchar((num) + '0');
        num++;
    }
    num = 'a';
    while(num <= 'f')
    {
        putchar(num);
        num++;
    }
    putchar('\n');
    return 0;
}