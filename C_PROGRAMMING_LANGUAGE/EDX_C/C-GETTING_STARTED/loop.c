#include <stdio.h>
/* read and process multiple integers via a loop */
int main (void)
{
    int noOfRobots, sum1, sum2;
    int h1, w1, p1, r1;
    int h2, w2, p2, r2;
    scanf("%d", &noOfRobots);
    scanf("%d %d %d %d", &h1, &w1, &p1, &r1);
    sum1 = (p1 + r1) * (w1 - h1);
    scanf("%d %d %d %d", &h2, &w2, &p2, &r2);
    sum2 = (p2 + r2) * (w2 - h2);
    printf("%d", sum1 + sum2);    
}