#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * main - PID
 * 
 * Return: 0 
 */
pid_t getpid(void);
int main(void)
{
    pid_t mypid;
    mypid = getpid();
    printf("%u\n", mypid);
    return (0);
}