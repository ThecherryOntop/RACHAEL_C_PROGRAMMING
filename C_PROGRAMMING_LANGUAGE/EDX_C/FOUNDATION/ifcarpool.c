#include <stdio.h>
#define CARPOOL 1
#define ME 1
int main(void)
{
    int noOfpassengers;
    float gas;
    float tripCost;
    
    scanf("%d %f", &noOfpassengers, &gas);
    
        if (noOfpassengers == 0)
        {
            tripCost = gas;
            printf("%.2f", tripCost);
        }
        else if (noOfpassengers > 0)
        {
            tripCost = (gas + CARPOOL) / (float) (noOfpassengers + ME);
            printf("%.2f", tripCost);
        }
        else{
            printf("nothing");
        }
        return 0;
}