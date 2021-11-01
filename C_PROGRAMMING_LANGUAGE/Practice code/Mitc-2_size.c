
/* Size of data types*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
   char c, ci; 
   c = CHAR_MIN; ci = CHAR_MAX;
   unsigned char cc, ccc;
   cc = CHAR_MIN; cc =  CHAR_MAX;
   short int s, ss;
   s = CHAR_MIN; ss =  CHAR_MAX;
   unsigned int i, ii;
   i = CHAR_MIN; ii =  CHAR_MAX;
   unsigned long  ul, uli;
   ul = CHAR_MIN; uli = CHAR_MAX;
   int n, nn;
   n = CHAR_MIN; nn = CHAR_MAX;
   float f, ff;
   f = CHAR_MIN; ff = CHAR_MAX;
   
   printf("size of type 'char' on my 64bit computer:  %lu bytes\n", sizeof(char));
   printf("minimum and maximum value of 'char': %d, %d\n", c, ci);
   printf("size of type 'unsigned char' on my 64bit computer: %lu bytes\n", sizeof(unsigned char));
   printf("minimum and maximum value of 'unsigned char': %d, %d\n", cc, ccc);
   printf("size of type 'short' on my 64bit computer: %lu bytes\n", sizeof(short));
   printf("minimum and maximum value of 'short': %d, %d\n", s, ss);
   printf("size of type 'unsigned int' on my 64bit computer: %lu bytes\n", sizeof(unsigned int));
   printf("minimum and maximum value of 'unsigned int': %d, %d\n", i, ii);
   printf("size of type 'unsigned long' on my 64bit computer: %lu bytes\n", sizeof(unsigned long));
   printf("minimum and maximum value of 'unsigned long': %d, %d\n", ul, uli);
   printf("size of type 'int' on my 64bit computer: %lu bytes\n", sizeof(short));
   printf("minimum and maximum value of 'int': %d, %d\n", n, nn);
   printf("minimum and maximum value of 'int': %d, %d\n", n, nn);
   printf("size of type 'float' on my 64bit computer: %lu bytes\n", sizeof(float));
   printf("minimum and maximum value of 'float': %d, %d\n", f, ff);
   return 0;
}
