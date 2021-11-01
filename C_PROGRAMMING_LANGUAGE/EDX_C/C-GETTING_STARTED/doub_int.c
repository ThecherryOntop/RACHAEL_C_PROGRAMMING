#include <stdio.h>
/* coverts double to integer */
int main (void)
{
    int pop;
    double ppg;
    scanf("%d %lf", &pop, &ppg);
    printf("%d", pop + (int) ppg);
}