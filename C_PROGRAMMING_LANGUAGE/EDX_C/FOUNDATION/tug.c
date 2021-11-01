#include <stdio.h>
/* Compare decimals to play tug of war */
int main(void)
{
    int noOfplayers, sum1, sum2;
    int t1p1, t2p1, t1p2, t2p2, t1p3, t2p3, t1p4, t2p4;
    scanf("%d %d %d %d %d %d %d %d %d", &noOfplayers, &t1p1, &t2p1, &t1p2, &t2p2, &t1p3, &t2p3, &t1p4, &t2p4);
    sum1 = t1p1 + t1p2 + t1p3 + t1p4;
    sum2 = t2p1 + t2p2 + t2p3 + t2p4;
    if(sum1 > sum2)
    printf("Team 1 has an advantage\n Total weight for team 1: %d\n", sum1);
    printf("Total weight for team 2: %d", sum2);
}