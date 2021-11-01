#include <stdio.h>
/**
 * There are 10 ingredients in the recipe and the 
 * quantities needed for each of them are given as input
 *  (in grams). Your program must read 10 integers
 *  (the quantities needed for each of the ingredients, 
 * in order) and store them in an array.
 *  It should then read an integer which represents
 *  an ingredient's ID number (between 0 and 9), 
 * and output the corresponding quantity.
 * 
 */
int main (void)
{
    int ingredients[10];
    int values;
    int cellNumber = 0;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &values);
        ingredients[cellNumber] = values; 
        cellNumber = cellNumber + 1;    
    }
        scanf("%d", &cellNumber);
        printf("%d", ingredients[cellNumber]);
    
    return 0;
}