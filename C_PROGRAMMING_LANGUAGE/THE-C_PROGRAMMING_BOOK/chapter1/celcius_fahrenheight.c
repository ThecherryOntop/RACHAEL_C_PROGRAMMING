#include <stdio.h>
/** 
 * Celcius to fahrenheight table
 * fahr ( 0, 12, 24 ...240)
 */
int main(void){
    int step = 12;
    float fah = 0.0;
    float upper = 240.0;
    float lower = 0.0;
    float celcius;
    printf("Fahrenheight-Celcius conversion table\n");
   while (fah <= 240)
    {
        celcius = (5.0 /9.0) * (fah - 32.0);
        printf("%3.0f\t%6.1f\n", fah, celcius);
        fah = fah + step;
    }
    return (0);
}

