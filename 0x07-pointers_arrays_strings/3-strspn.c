#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix substring
 * Return:number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				bytes++;
				break;
			}
			else if (accept[a + 1] == '\n')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}
