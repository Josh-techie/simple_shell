#include "shell.h"

/**
 * find_path - finds the PATH from the global environment
 *
 * Return: NULL if PATH is not found, or the PATH if found
 */
char *find_path(void)
{
	int x = 0;
	char **env = environ;
	char *path = NULL;

	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && x < 5)
			{
				path++;
				x++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}
