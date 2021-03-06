#include <stdio.h>
#include <stdlib.h>
/* binsearch: find x in v[O] <= v[1] <= ••• <= v[n-1] */ 

int binarysearch(int x,int v[], int n)
{
    int low, high, mid; 
    low = 0; 
    high = n - 1; 
    while (low <= high) { 
    mid = (low+high) / 2; 
    if (x < v[mid]) 
     
        high = mid - 1; 
    else if (x > v[mid]) 
    low = mid + 1; 
    else /* found match */ 
    return mid;
    }
   
    return -1;
} 