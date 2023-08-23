#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - How to do it.
 * Get back: Blank.
 */
char *secure_getenv(const char *name)
{
char *house = secure_getenv("HOUSE");
if (house != NULL)
{
	printf("What is house: %s\n", house);
}
else
{
	printf("The ecosystem set.\n");
}

return (0);
}
