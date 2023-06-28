#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * in  a new next line
 * @s: string
 * Return:void
 */

void puts_half(char *s)
{
	int r = 0;
	int d;

	while (s[r] != '\0')
	{
		r++;
	}
	if (r % 2 == 1)
	{
		d = (r - 1) / 2;
		d += 1;

	}
	else
	{
		d = r / 2;
	}
	for (; d < r; d++)
	{
		putchar(s[d]);
	}
	putchar('\n');
}
