#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate one of string to another until n byte
 * @s1: string one
 * @s2: string two
 * @n: number of byte from one string to be concatenated
 * Return: pointer to a newly allocated memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	while (s2[j] != '\0' && j < n)
	{
		j++;
		len2++;
	}
	if (n >= len2)
		n = len2;
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);
	i = 0, j = 0;
	while (i < len1)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (j < n)
	{
		*(concat + i) = *(s2 + j);
		i++;
		j++;
	}
	*(concat + i) = '\0';
	return (concat);
}
