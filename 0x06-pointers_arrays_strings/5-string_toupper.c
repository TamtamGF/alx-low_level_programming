#include "main.h"

/**
 * string_toupper - change lowercase string to uppercase string
 * * @k:string
 * Return:char
 */
char *string_toupper(char *k)
{

	int i;

i = 0;
	while (*(k + i))
	{
		if (*(k + i) >= 'a' && *(k + i) <= 'z')
			*(k + i) -= 'a' - 'A';
		i++;
	}
	return (k);
}
