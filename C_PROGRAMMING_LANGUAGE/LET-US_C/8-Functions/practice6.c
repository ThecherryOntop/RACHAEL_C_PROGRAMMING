# include <stdio.h>
/* find the error if any */
int main( )
{
float a = 15.5;
char ch = 'C';
printit(a, ch);
return 0;
}
printit (a, ch)
{
printf ("%f %c\n", a, ch);
}
