# include <stdio.h>
/* Point out the error if any */
void message();
int main()
{
int a;
a = message(); // A value of type void can not be assign to an entity of type int
return 0 ;
}
void message()
{
printf ("Viruses are written in C\n" );
return;
}