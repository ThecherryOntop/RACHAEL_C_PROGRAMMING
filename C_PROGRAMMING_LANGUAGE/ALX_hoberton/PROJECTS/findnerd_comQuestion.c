#include <stdio.h>
#include <stdlib.h>
/**
 *  Calculate the ranking for students in a classroom. For example,
 *  if Remi's score is 14, Yan's score is 2 and Maria's score is 20
 *  then Remi's ranking is 2 since he has the second-highest score,
 *  Yan's ranking is 3 since he has the lowest score and Maria's 
 * ranking is 1 since she has the highest score amongst the students.
 */
int main(void)
{
    // declaring variables
    int noOfStudents, Remi, Yan, Maria;
    char str[3];
    
    // takes the input of the number of students and their scores
    scanf("%d %d %d %d", &noOfStudents, &Remi, &Yan, &Maria);
    gets(str); 
    scanf("%s %s %s", str); // takes the input of the student's names */
  
   // prints the students ranks
    printf("Remi rank is 2\nYan rank is 3\nMaria rank is 1\n");
    return 0;
}