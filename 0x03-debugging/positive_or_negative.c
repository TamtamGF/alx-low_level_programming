include "main.h"

/**
 * positive_or_negative - checks if the number is positive or negative
 * @i:number to be checked
 * Return:always 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n");
	else if (i < 0)
		printf("%d is negative\n");
	else
	{
		 printf("%d is zero\n");
	}
}
