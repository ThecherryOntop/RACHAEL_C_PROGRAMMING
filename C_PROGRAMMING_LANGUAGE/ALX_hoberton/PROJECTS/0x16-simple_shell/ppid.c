#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * main - PID
 * 
 * Return: 0
 */
pid_t fork(void);
pid_t getppid(void);
int main(void)
{
    pid_t myppid;
    fork();
    myppid = getppid();
    printf("%u\n", myppid);
    return(0);

}
