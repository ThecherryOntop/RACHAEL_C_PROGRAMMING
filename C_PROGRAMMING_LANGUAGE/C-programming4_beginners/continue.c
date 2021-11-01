/**
 * @file continue.c
 * @author Osiyai Rachael (mofeosiyai.mo@gmail.com)
 * A program that uses continue to skip codes
 * @version 0.1
 * @date 2021-09-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
int main(void)
{
    enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    for (enum Day day = Monday; day <= Sunday; ++day){
        if (day == Wednesday)
        continue;

        printf("It's not Wednesday!\n");
        /* Do something useful with day */
    }
}