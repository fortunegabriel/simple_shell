#include <stdio.h>
#include <unistd.h>
/**
 * main - Cruse.
 * Get back: Must be zero nor one.
 */
int main(void)
{
pid_t my_pid;
pid_t child_pid;

child_pid = fork();
if (child_pid == -1)
{
perror("Error:");
return (1);
}
my_pid = getpid();
printf("My speci %u\n", my_pid);
if (child_pid == 0)
{
printf("(%u) Nooooooooo!\n", my_pid);
}
else
{
printf("(%u) %u, Beware i am your dad\n", my_pid, child_pid);
}
return (0);
}
