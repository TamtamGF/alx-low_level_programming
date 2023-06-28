#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every character of a string
 * @str: a pointer
 * Return: 0
 */
void puts2(char *str)
{
	int l = 0;
	int x = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	x = l - 1;
	for (i = 0; i <= x; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
