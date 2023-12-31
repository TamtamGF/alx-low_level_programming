#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: the number of which factorial is to be returned
 * Return: factor or -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
