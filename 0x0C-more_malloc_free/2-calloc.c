#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: members of array
 * @size: size of array element in byte
 * Return: a pointer to the memory allocated or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < size * nmemb)
	{
		*((char *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}
