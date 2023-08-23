#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 *main - We are doing display.
* Get back: Must be zero nor 1;
*/
int main(void)
{
	size_t blue_size = 0;
	char *blue = NULL;
	int u = 0;
	int status;
	char **array;
	pid_t piki_pid;
	char *take;
	
	while (1)
	{
		write(1, "#java is best$ ", 5);
		getline(&blue, &blue_size, stdin);
		array = malloc(sizeof(char *) * 1024);
		strtok(blue, "\t\n");
		take = strtok(blue, "\t\n");

		while (take)
		{
			array[u] = take;
			take = strtok(NULL, "\t\n");
			u++;
		}
		array[u] = take;
		piki_pid = fork();

		if (piki_pid == 0)
		{
			if (execve(array[0], array, NULL) == -1)
				perror("Should show negative");
		}
		else
		{
			wait(&status);

	}
			
		u = 0;
		free(array);
		free(blue);
	}
	return (0);
}
