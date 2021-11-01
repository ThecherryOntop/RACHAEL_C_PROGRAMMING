#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
/**
 * main - PPID
 * 
 * Return: 0 
 */
pid_t getppid(void);  //prototype declaration for parent process ID(PPID)
int main(void)
{
    pid_t myppid;   // declares variable myppid
    myppid = getppid(); //calls the function getppid()
    printf("%u", myppid); //prints the PPID
    return (0);
}