#include "shell.h"
/**
 * bfree - free pointer
 * @ptr: adderss
 *
 * Return: 1 or 0
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
