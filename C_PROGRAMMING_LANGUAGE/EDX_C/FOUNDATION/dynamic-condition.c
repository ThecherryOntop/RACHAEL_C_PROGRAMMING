#include <stdio.h>
/* use an if statement with a dynamic comndition */
int main(void)
{
    // +-*/% : arithmetic operators
    // <> <= >= != == : cpmparison operators
    int a = 5;
    int b = 2;
    int result;
    printf("check: Is a == b?\n");
    result = (a==b);
    printf("Result is %d.\n", result);
    if (result)
    {
        printf("TRUE!");
    }
    else
    {
        printf("FALSE!");
    }
    return 0;
}