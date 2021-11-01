/* Print binary equivalent of characters using showbits( ) function */
#include <stdio.h>
#include <stdlib.h>
void showbits ( unsigned char ) ;
int main( )
{
unsigned char num ;
for ( num = 0 ; num <= 5 ; num++ )
{
printf ( "\nDecimal %d is same as binary ", num ) ;
showbits ( num ) ;
}
return 0 ;
}