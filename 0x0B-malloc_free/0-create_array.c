#include <stdlib.h>
#include "main.h"

/**
 * create_array -  create array of chars,initializes it with a specific char
 * @size: array size
 * @c: character to initialize
 * Return: NULL if it fails else a pointer to an array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
