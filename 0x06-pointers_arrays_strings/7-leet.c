#include "main.h"

/**
 * leet - encodes a string leet into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int i, j;
	char k[] = "aAeEoOtTlL";
	char c[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (k[j] == s[i])
				s[i] = c[j];
		}
	}
	return (s);
}
