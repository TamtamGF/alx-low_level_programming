#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints what an array holds
 * @p: pointer
 * @k: integer
 * Return: 0
 */
void print_array(int *p, int k)
{
	int i;

	for (i = 0; i < k; i++)
	{
		printf("%d", p[i]);
		if (i < k - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
