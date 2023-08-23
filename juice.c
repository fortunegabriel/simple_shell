#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
/**
 * main - Piki and papp.
 * Get back: Must be 0 nor 1;
 */
int main(void)
{
	pid_t piki_pid;
	int status;
	int u;
	char *args[] = {"ls", "-l", "/tmp", NULL};

	for (u = 0; u <= 1; u++)
	{
		piki_pid = fork();
		if (piki_pid == -2)
		{
			perror("Error: ");
			
			return (1);
		}
	}
	if (piki_pid == 0)
	{
		execve("/usr/bin/ls", args, NULL);
		perror("Error:");
		exit(1);
	}
	else 
	{
		wait(&status);
	}
}
