#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: nothing
 */
int main(void)
{
	int i = 0, c = 0;
	const char *args[] = {"/bin/ls", "-l", NULL};
	const char *env[] = {NULL};
	execve("/bin/ls", args, env);
	perror("execve failed");
	return (0);
	// execve("/bin/ls", "l", "./");
}
