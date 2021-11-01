#include <stdio.h>
#include <stdlib.h>
/**
 * Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * All your code should be in the main function
 * 
 * Return: 0
 */
int main(void)
{
    int num= 0;
    while (num <= 9)
    {
       printf("%d", num);
        num++;
    }
    putchar('\n');
    return (0);
}