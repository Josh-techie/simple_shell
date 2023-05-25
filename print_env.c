#include "shell.h"

/**
 * print_env - prints the environment string to stdout
 *
 * Return: void
 */
void print_env(void)
{
	int x = 0;
	char **env = environ;

	while (env[x])
	{
		write(STDOUT_FILENO, env[x], _strlen(env[x]));
		write(STDOUT_FILENO, "\n", 1);
		x++;
	}
}

