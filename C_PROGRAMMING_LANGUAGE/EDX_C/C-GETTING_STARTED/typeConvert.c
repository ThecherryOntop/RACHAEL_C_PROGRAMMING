#include <stdio.h>
/* Converting integers to double */
int main(void)
{
    int noOfGrades, g1, g2, g3, g4;
    double avg;
    scanf("%d %d %d %d %d", &noOfGrades, &g1, &g2, &g3, &g4);
    avg = (double)(g1 + g2 + g3 +g4) / (double)noOfGrades;
    printf("%.2f", avg);
    return (0);
}