#include <stdio.h>
#include <cs50.h>

int main(int argc, char *argv[])
{
    string name = get_string("What is your name?");
    printf("My name is %s", name);
    return 0;
}
