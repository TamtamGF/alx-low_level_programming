#include <stdio.h>

/**
 * main - prints alphabets
 * Return: always 0
 */
int main(void)
{
	char lc[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lc[i]);
	}
	putchar('\n');
	return (0);
}
