#include "main.h"

/**
 * reverse_array - reverse arrays of an integer
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
int k, c;

for (k = 0; (k < (n - 1) / 2); k++)
	{
	c = a[k];
	a[k] = a[n - 1 - k];
	a[n - 1 - k] = c;
	}
}
