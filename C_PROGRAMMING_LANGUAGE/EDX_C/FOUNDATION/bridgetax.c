#include <stdio.h>
/* compare decimals to cross bridge */
int main(void)
{
    int d1;
    int d2;
    int sum; 

    scanf("%d %d", &d1, &d2);
    if ((d1+d2) >= 10)
    {
        printf(" Special tax\n %d", 36);
    }
    else
    {
        sum = d1 + d2;
        printf("Regular tax\n %d", sum * 2);
    }

}