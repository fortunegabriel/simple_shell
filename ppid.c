#include <stdio.h>
#include <unistd.h>

/**
 * main - Pid.
 *
 * Get back: Must be zero.
 */
int main(void)
{
    pid_t dad_pid;

    dad_pid = getppid();
    printf("%u\n", dad_pid);
    return (0);
}
