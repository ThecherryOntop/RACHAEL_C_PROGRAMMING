#include <stdio.h>
/* divide numbers */

int main(void)
{
    double celcius;
    double fahreint;
    scanf("%lf", &celcius);
    fahreint = celcius * 9.0 / 5.0 + 32.0;
    printf("%.1lf", fahreint);
    return 0;
}
