#include <unistd.h>

/**
 * _putchar - returns character c to stdout
 * @c: character to print
 * Return: 1 on success
 * on error, -1 is returned and error set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
