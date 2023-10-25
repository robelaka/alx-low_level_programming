#include "main.h"
/**
 * _memset - fills the n elements of array by constant byte b
 * @s: an array to be filled with the constant
 * @b: character used to fill
 * @n: specifay how much bytes to be filled
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
