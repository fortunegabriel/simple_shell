#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - Over take and be patience.
 * Get back: Must be zero.
 */
int main(void)
{
    pid_t child_pid;
    int status;

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child_pid == 0)
    {
        printf("Patience is key, patience is key\n");
       usleep(10);
    }
    else
    {
        wait(&status);
        printf("The God of Chosen is in charge.\n");
    }
    return (0);
}
