#include <stdio.h>
#define BASEPRICE 10

/* if else to find hostel cost */
int main(void)
{
    int arrival;
    int price;
    int eachHr = 5;

    scanf("%d", &arrival);
    if (arrival > 8){
        price = 53;
        printf("%d", price);
    }
     else{
         price = BASEPRICE + eachHr * arrival;
         printf("%d", price);
     }
     return 0;
}

            
      