#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * mickey: We are doing a word sounte.
 */

void mickey(const char *str, char delim)
{
	int length = strlen(str);
	char *write = malloc(sizeof(char));
	int u, g;

	for (u = 0; u <= length; u++)
	{
		g = 0;
		if (str[u] == delim || str[u] == '\0')
			write[g] = '\0';
		if (g > 0)
		{
			printf("%s\n", write);
			g = 0;
		}
		else
		{
			write[g++] = str[u];
					}
	}
}
