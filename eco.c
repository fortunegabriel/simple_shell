#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *We have to had the ecosystem.
 *Get back: Must be zero.
 */
extern char **environ;

int main(void)
{
char **env_ptr = environ;

while (*env_ptr != NULL)
{

printf("%s\n", *env_ptr);
env_ptr++;
}

return (0);
}
