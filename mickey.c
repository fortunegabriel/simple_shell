#include <stdio.h>
#include <string.h>
/**
 * mickey: We are doing a word sounte.
 */

void mickey(const char *str, char deli)
{
	int length = strlen(str);
	char rd[length + 1];
	int u, g;

	for (u = 0; u <= length; u++)
	{
		g = 0;
		if (str[u] == deli || str[u] == '\0')
			rd[g] = '\0';
		if (g > 0)
		{
			printf("%s\n", rd);
			g = 0;
		}
		else
		{
			rd[g++] = str[u];
					}
	}
}
