#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: pointer to the memory area where data will be copied to
 * @src: pointer to memory area where data will be copied from
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
