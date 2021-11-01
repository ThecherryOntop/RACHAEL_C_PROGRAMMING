/**
 * @file number_generator.c
 * @author osiyai Rachael (you@domain.com)
 * Generate a random number from 0-20
 * @date 2021-09-20
 * 
 * Return: Always 0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Create a time variable
    time_t t;

    // Initialize the random number generator
    srand((unsigned)time(&t));
  
    // Storing the random number (0-20) in an int variable
    int randomNumber = rand() % 21; 

    // The guessing game brief
    printf("This is a guessing game.\n I have chosen a number between 0 and 20 which you must guess.\n You have 5 tries.\n Enter a guess:\n ");

    int num = 4;
    scanf("%d", &randomNumber);
    for (randomNumber = num; randomNumber > num; ++randomNumber, randomNumber < num, --randomNumber)
    {
    if (randomNumber > num){
    printf("Sorry, %d is wrong. My number is less than that", randomNumber);
    }
    else if (randomNumber < num)
    {
        printf("sorry, %d is wrong. My number is greater than that", randomNumber);
    }
     else if (randomNumber == 5){
        printf("You got it right");
    }
    else {
        printf("Try again");
    }
    }
    return (0);
}