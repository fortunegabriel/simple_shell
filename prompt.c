#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	size_t q = 0;
	char *blue = NULL;

	printf("root@548bba578db0$ ");
	getline(&blue, &q, stdin);
	printf("%s", blue);

	free(blue);

	return (0);
}
