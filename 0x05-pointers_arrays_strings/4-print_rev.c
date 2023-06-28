#include "main.h"

/**
 * print_rev - output string in reverse
 * @k: input string.
 *
 * Return: void
 */

void print_rev(char *k)
{
	int c = 0;

	while (c >= 0)
	{
		if (k[c] == '\0')
			break;
		c++;
	}

	for (c--; c >= 0; c--)
		_putchar(k[c]);
	_putchar('\n');
}
