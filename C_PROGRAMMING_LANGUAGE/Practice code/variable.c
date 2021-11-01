/* Declaring and initializing variable*/
#include <stdio.h>

int main(void)
{
    char c = 'A';
    char ci = 'B';
    printf("%d%d\n", c, ci);
    if (c > ci){
        printf("I already know that");
    }
    else {
        printf("Its alright");
    }
    return 0;

}