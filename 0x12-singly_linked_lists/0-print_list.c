#include "lists.h"



/**
 * print_list - it prints the list
 * @h: it is  the  head of list
 * Return: elements number
 */

size_t print_list(const list_t *h)
{
	int b = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		b++;
	}
	return (b);
}
