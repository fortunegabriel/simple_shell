#include <stdio.h>
#include <unistd.h>
/**
 * main - Shows who is boss.
 * Get back: Zero.
 */
int main(void)
{
	fork();
	fork();
	printf("%u I have an identification.\n", getpid());
	return (0);
}
