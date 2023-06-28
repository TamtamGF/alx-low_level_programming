#include "main.h"

/**
 * _puts - output string to stdout
 * @s: pointer to string
 * return: void
 */

void _puts(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		_putchar(s[n]);
	_putchar('\n');
}
