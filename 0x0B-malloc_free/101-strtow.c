#include <stdlib.h>
#include <stdio.h>

/**
 * **strtow - a function that splits a string into words
 *
 * @str: string to be split
 * Return: pointer to array of strings, or NULL if fail
 */
char **strtow(char *str)
{
	char **c;
	int i, k, n, word_count = 0, word_len = 0, current_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
			word_count++;
		while (*(str + i) != ' ' && *(str + i))
			i++;
		if (!*(str + i))
			break;
	}
	if (word_count == 0)
		return (NULL);
	c = malloc(sizeof(char *) * (word_count + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0, k = i; current_word < word_count; i++, word_len = 0, k = i)
	{
		if (*(str + i) == ' ')
			continue;
		while (*(str + k) != ' ' && *(str + k++))
			word_len++;
		c[current_word] = malloc(sizeof(char) * word_len + 1);
		if (!c[current_word])
		{
			while (current_word-- >= 0)
				free(c[current_word]);
			free(c);
			return (NULL);
		}
		for (n = 0; i < k; i++, n++)
			c[current_word][n] = *(str + i);
		c[current_word++][n] = '\0';
	}
	c[word_count] = NULL;
	return (c);
}
