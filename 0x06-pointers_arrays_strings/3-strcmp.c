#include "main.h"
/**
 * _strcmp - function to compares two strings
 * @s1: input one
 * @s2: input two
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] != '\0' && s2[k] != '\0'; k++)
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
	}
	return (0);
}
