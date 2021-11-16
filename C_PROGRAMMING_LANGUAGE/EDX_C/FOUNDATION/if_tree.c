#include <stdio.h>
/**
 * "Tinuviel" is 5 meters high or less and its leaves are composed of 8 or more leaflets
 * "Calaelen" is 10 meters high or more and its leaves are composed of 10 or more leaflets
 * "Falarion" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets
 * "Dorthonion" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets
 * Your program should read the height and the number of leaflets of a given tree (both integers), 
 * and should be able to determine and display the name of the corresponding tree.  
 * If the height and number of leaflets does not match any of the tree type descriptions,
 *  your program should display "Uncertain".
*/

int main()
{

    int heightOfTree;
    int countOfLeaflets;

    scanf("%d %d", &heightOfTree, &countOfLeaflets);

    if (heightOfTree <= 5 && countOfLeaflets >= 8)
        printf("Tinuviel");
    else if (heightOfTree >= 10 && countOfLeaflets >= 10)
        printf("Calaelen");
    else if (heightOfTree <= 8 && countOfLeaflets <= 5)
        printf("Falarion");
    else if (heightOfTree >=12 && countOfLeaflets <= 7)
        printf("Dorthonion");
    elses
        printf("Uncertain");

    return (0);
}





