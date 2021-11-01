#include <stdio.h>
#include <stdlib.h>
/* binsearch: find x in v[O] <= v[1] <= ••• <= v[n-1] */ 

int main(void)

{
    int x, n;
    int low, high, mid; 
    low = 0; 
    high = n - 1;
    scanf("%i", high);
    while (low <= high) { 
       mid = (low+high) / 2; 
        scanf("%i", x);
    if (x < mid) 
     
        printf("high = mid - 1"); 
    else if (x >= mid) 
        printf("low = mid + 1"); 
    else /* found match */ 
    return mid;
    }
   
    return -1;
} 