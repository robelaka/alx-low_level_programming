#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: number of bytes allocated in memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
