/** switch statement to read user's input
 * number of slices of pizzas consumed
 * 
 * Return 0
 */

#include <stdio.h>
int main(void)
{
    int slices;
    int cal = 256;
   
    printf("enter the number of slices of pizza: ");
    scanf("%d", &slices);
    switch (slices){
        case 1:
        printf(" you love pizza that much?");
        break;
        case 2:
        printf("I am amazed by the number of pizza you have consumed\n");
        break;
        case 3:
        printf("I ate 3 slices of pizza and am still hungry\n");
        break;
        default:
        printf("I still want more slices of pizza\n");
        break;
    }
    printf("I ate more slices of pizza, now i have in take %d number of calories", cal*slices);
    return (0);
}

