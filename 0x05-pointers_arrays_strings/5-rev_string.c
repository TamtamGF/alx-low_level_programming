#include "main.h"
#include <stdio.h>
/**
 * rev_string - codes  that reverses string
 * @k: string pointer
 * Return: 0
 */
void rev_string(char *k)
{
	int i = 0;
	int l = 0;
	char temp;

	while (k[i++])
	{
		l++;
	}
	for (i = l - 1; i >= l / 2; i--)
	{
		temp = k[i];
		k[i] = k[l - i - 1];
		k[l - i - 1] = temp;
	}
}
