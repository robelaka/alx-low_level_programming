#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to old memory allocation
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
		{
			return (NULL);
		}
		else
		{
			return (new);
		}
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < new_size && i < old_size; i++)
		*((char *)new + i) = *((char *)ptr + i);
	free(ptr);
	return (new);
}
