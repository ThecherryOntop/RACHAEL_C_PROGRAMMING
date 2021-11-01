#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * A c program that prints exactly
 * and that piece of art is useful" 
 * - Dora Korpar, 2015-10-19 followed by a new line to the standard error
 * 
 * Return: 1
 */
int main(void)
{
    fprintf(stderr, "and that piece of art is useful\"\n - Dora Korpar, 2015-10-19");
    return 1;
}