#include "main.h"
/**
 * _strlen - function to return string length
 * @s: string pointer
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}
