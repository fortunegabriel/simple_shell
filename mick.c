#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * We are going to do an aplha for this.
 * Get back: Must be zero.
 */
int main(void)
{
	char *str = "What must be divided.";
	char *chosen = malloc(sizeof(char) * strlen(str));
	char delim[10] = " ";
	char *luke;
	int u;
	
	strcpy(chosen, str);
	luke = strtok(chosen, delim);
while (luke != NULL)
	{
	printf("%s\n", luke);
luke = strtok(NULL, delim);
	}

for (u = 0; u < 20; u++)
{
	if (chosen[u] == '\0')
		printf("\\0");
	else
		printf("%c", chosen[u]);
}
	return (0);
}
