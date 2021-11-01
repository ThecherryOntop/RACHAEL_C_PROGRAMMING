#include <stdio.h>
/* finding the remainder in integer division */
int main(void)
{
    int noOfMatch;
    int sizeOfeachBox;
    int Full;
    int rest;
    scanf("%d\n %d\n", &noOfMatch, &sizeOfeachBox);
    Full = noOfMatch / sizeOfeachBox;
    printf("%d\n", Full);
    rest = noOfMatch % sizeOfeachBox;
    printf("%d\n", rest);
    return 0;
}