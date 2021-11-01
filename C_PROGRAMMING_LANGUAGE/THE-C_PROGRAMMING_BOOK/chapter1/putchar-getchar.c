#include <stdio.h>
/**
 * Verify that the expression getchar ( ) I= EOF is 0 or 1
 * read a character 
 * while (character is not end -of-file indicator) 
 * output the character just read  
 * 
 */
int main(void){
    int c;
    c = getchar();
   
    while ( c != EOF)
    {
        putchar(c);
        c = getchar();
     
    }

}