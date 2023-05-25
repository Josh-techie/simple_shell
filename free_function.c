#include "shell.h"

/**
 * free_buffers - frees the buffers
 * @buffers: buffer to be freed
 *
 * Return: void
 */
void free_buffers(char **buffers)
{
	int i = 0;

	if (!buffers || buffers == NULL)
		return;

	while (buffers[i])
	{
		free(buffers[i]);
		i++;
	}

	free(buffers);
}
