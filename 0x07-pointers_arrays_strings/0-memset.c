#include "main.h"

/**
 * _memset - function that fills a memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: constant byte that will be used to fill empty memory
 * @n: number of bytes to be filled with constant b
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
