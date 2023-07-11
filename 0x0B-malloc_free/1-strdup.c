#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return pointer to newly allocated memory
 * @str: original string
 * Return: NULL if str = NULL, else pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(str + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	strdup(s, str);
	return (s);
}
