#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	int n;

	printf("argv is same argv[]\n");

	for (n = 1; n < ac; n++)
	{
		printf("The argv = %s\n", *av);
		av++;
	}
	return (0);
}
