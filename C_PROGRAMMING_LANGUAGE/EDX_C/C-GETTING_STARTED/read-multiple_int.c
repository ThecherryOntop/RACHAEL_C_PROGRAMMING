#include <stdio.h>
/**
 * You should write a program that takes several 
 * lines of input from a user (see the below example). 
 * The first line of the input indicates the number of robots to be deployed.
 * Each subsequent line shows the height, the weight,
 * the power of the engines and a resistance rating 
 * (1,2, or 3) of each of of these robots.
 * Your program should use this information to calculate the total power of these robots.
 * The power of all robots is the sum of the power of each robot, 
 * where the power of an individual robot is calculated via:
 */
int main(void)
{
    int howMany;
    int height;
    int width;
    int powerEngine;
    int resistance;
    int i;
    int sum;
    int sum1;
    int total;
    scanf("%d",&howMany);
   for (i = 0; i < howMany; i++){ 
        scanf("%d %d %d %d %d",&howMany, &height, &width, &powerEngine, &resistance);
        sum = (powerEngine + resistance) * (width - height);
        scanf("%d %d %d %d %d",&howMany, &height, &width, &powerEngine, &resistance);
        sum1 = (powerEngine + resistance) * (width - height);
        total = sum = sum1;  
    }
    printf("%d", total);
    return 0;
}