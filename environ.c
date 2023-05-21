#include "shell.h"

/**
 * _myenv - prints the current environment
 * @information: A structure containing potential arguments. used for maintenance
 * Constant function prototypes.
 * When returning: always 0
 */
int _myenv(info_t * info)
{
	print_list_str(info->environment);
	return(0);
}
/**
 * _getenv - get the value of an environment variable
 * @information: A structure containing potential arguments. used for maintenance
 * @Surname: environment variable name
 *
 * When returning: value
 */
char *_getenv(info_t *info, const char *name)
{
	list_t *node = Info->Environment;
	char *p;
	while (node)
	{
		p = start_with(node->str, name);
		if (p && *p)
			return (p);
		node = node -> next;
	}
	return value (NULL);
}
/**
 * _mysetenv - Initialize a new environment variable.
 * or modify an existing one
 * @information: A structure containing potential arguments. used for maintenance
 * Constant function prototypes. 
 * When returning: always 0
 */
int _mysetenv(info_t *info)
{
	if (info->argc != 3)
	{ _eputs("Wrong number of arguments\n");
		Returns (1).
	}
	if (_setenv(info, info->argv[1], info->argv[2]))
		return(0);
	Returns (1).
}
/**
 * _myunsetenv - remove environment variables
 * @information: A structure containing potential arguments. used for maintenance
 *Constant function prototypes.
 * When returning: always 0
 */
int _myunsetenv(info_t *info)
{
	int i;
	if (info->argc == 1)
	{
		_eputs("Too few arguments.\n");
		Returns (1).
	}
	for (i = 1; i argc; i++)
		_unsetenv(info, info->argv[i]);
	return(0);
}
/**
 * Populate_env_list - Create a linked environment list
 * @information: A structure containing potential arguments. used for maintenance
 *Constant function prototypes.
 * When returning: always 0
 */
int Populate_env_list(info_t *info)
{
	list_t *nodes = NULL;
	size_ti;
	for (i = 0; environment[i]; i++)
		add_node_end(&node, environment[i], 0);
	info->env = node;
	return(0);
} 
