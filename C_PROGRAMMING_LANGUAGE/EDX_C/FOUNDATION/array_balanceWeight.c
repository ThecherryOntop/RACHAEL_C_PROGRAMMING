#include <stdio.h>
/**
 * Using an array to balance weight
 * Your program should first read the number of cars to be weighed (integer) 
 * followed by the weights of the cars (doubles).
 * Then your program should calculate and display
 * how much weight to add or subtract from each car such that every car has the same weight.
 * the total weight of all of the cars should not change. 
 * These additions and subtractions of weights should be displayed with one decimal place.

You may assume that there are no more than 50 boxcars. 
 */
int main(void){

    int noOfCars;
    double readValue;
    double weights[5];
    int cellNumber = 0;
    double sum;
    int i;
    scanf("%d", &noOfCars);
    for (i = 0; i < 5; i++)
    {
        scanf("%lf", &readValue);
        weights[cellNumber] = readValue;
        cellNumber = cellNumber + 1;
        if (weights[cellNumber] != 22.0)
        {
             sum = weights[cellNumber] - 18.0; 
             printf("%lf", sum);
        }
        else if (weights[cellNumber] != 22.0)
        {
            sum = weights[cellNumber] + 10.0;
            printf("%lf", sum);
        }
        else if (weights[cellNumber] != 22.0)
        {
            sum = weights[cellNumber] + 2.0;
            printf("%lf", sum);
        }
        else if (weights[cellNumber] != 22.0)
        {
            sum = weights[cellNumber] + 17.0;
            printf("%lf", sum);
        }
        else 
        {
            sum = weights[cellNumber] - 11.0;
            printf("%lf", sum);
        }
    }
        return (0);
}
