#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: holds contents of string 1
 * @s2: holds contents of string 2
 * Return: NULL on failure, pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int index;
	int concat_index = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	new  = malloc(sizeof(char) * len);

	if (new == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		new[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		new[concat_index++] = s2[index];

	return (new);
}
