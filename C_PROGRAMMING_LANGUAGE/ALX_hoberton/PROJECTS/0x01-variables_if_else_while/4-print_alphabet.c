/**
 * Write a program that prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e 
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * 
 * Return: 0
 */
/*
 * File: 4-print_alphabt.c
 * Auth:Osiyai Rachael
 */
#include <stdio.h>
#include <stdlib.h>
/*  Prints the alphabets in lowercase except q and e*/
int main(void)
{
   char ch = 'a';
   while (ch <= 'z')
   {
         ch++;
       if (ch != 'e' && ch != 'q')
          putchar(ch);        
   }
   putchar('\n');
   return 0;
}