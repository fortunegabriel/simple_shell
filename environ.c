#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
extern char **environ;
int main(void)
{
int u = 0;
while (environ[u] != NULL)
{
printf("%s\n", environ[u]);
u++;
}
}
