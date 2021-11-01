#include <stdio.h>
/* A C program that reads an onput character */
int main(void)
{
    char symbol;
    scanf("%c", &symbol);
    printf("++++%c++++\n+++%c###+++\n++%c####++\n+%c######+\n%c########\n", symbol, symbol, symbol, symbol, symbol);
   
    char sy;
    scanf("%c", &symbol);
    printf("++++%c++++\n+++%cooo+++\n++%coooo++\n+%coooooo+\n%coooooooo\n", sy, sy, sy, sy, sy);
    return 0;
} 