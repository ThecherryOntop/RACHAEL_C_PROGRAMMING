#include <stdio.h>

/** Minutes covertion program
 * converts minutes to years and days
 */
 int main(void)
 {
     int minutesEntered = 0;
     double years = 0.0;
     double days = 0.0;

     printf("Please enter the number of minutes ");
     // get input from user
     scanf("%d", &minutesEntered);
     
     double minutesInYear = (60 * 24 * 365);
     years = (minutesEntered / minutesInYear);
     days = (minutesEntered / 60.0) / 24.0;
     printf("%d minutes is approximately %f years and %f days", minutesEntered, years, days);
     return (0);
 }