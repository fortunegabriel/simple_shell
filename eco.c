#include <stdio.h>
#include <unistd.h>
/**
 *We have to had the ecosystem.
 *Get back: Must be 0;
 */
extern char **environ;
int main(int ac, char **av, char **env)
{
printf("%s\n", environ, env);
return (0);
}
