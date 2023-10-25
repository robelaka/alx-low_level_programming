#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integer
 * @min: minimum value of array element
 * @max: maximum value of array element
 * Return: a pointer to allocated memory or NULL
 */
int *array_range(int min, int max)
{
	int range;
	int i = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	range = max - min;
	ptr = malloc((range + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (i <= range)
	{
		*(ptr + i) = min + i;
		i++;
	}
	return (ptr);
}
