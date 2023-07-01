#include "main.h"

/**
 * _strncat - concatenates two strings using most n bytes
 * @dest:char dest
 * @src: char src
 * @n:length int
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, k;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[a + k] = src[k];
	}
	dest[a + k] = '\0';
	return (dest);
}
