#include <stdio.h>
#include <stdlib.h>
/**
 * Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code All your code should be in the main function
 * 
 * return (0);
 */
int main(void)
{
    int num = 0;
    while (num <= 9)
    {
        putchar((num) + '0');
        num++;
    }
    putchar('\n');
    return (0);
}
