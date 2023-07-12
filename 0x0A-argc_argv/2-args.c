#include <stdio.h>

/**
 * main - entry point
 * Description: prints all command line arguements
 * @argc: the count of arguements
 * @argv: the array of arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
