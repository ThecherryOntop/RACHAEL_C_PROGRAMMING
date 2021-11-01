#include <stdio.h>
/* Temperature conversion in rev- fah (300, 280 ...0) */
int main(void){
    int fah;
    for (fah = 300; fah >= 0; fah = fah - 20)
    {
        printf("%3d\t%6.2f\n", fah, (5.0/9.0)*(fah-32.0));
    }
    return (0);
}