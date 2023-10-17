#include "shell.h"

/**
* free_buffers - frees buffers
* @buf: buffer to be freed
*
* Return: no return
*/
void free_buffers(char **buf)
{
	int i = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[i])
	{
		if (buf[i] != NULL)
		{
			free(buf[i]);
			buf[i] = NULL;
		}
		i++;
	}
	free(buf);
}
