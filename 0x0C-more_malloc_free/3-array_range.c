#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)

		return (NULL);

	j = max - min + 1;

	p = malloc(sizeof(int) * j);

	if (p == NULL)

		return (NULL);

	for (i = 0; min <= max; i++)

		p[i] = min++;

	return (p);

}
