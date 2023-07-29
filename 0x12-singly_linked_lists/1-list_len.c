#include "lists.h"


/**
 * list_len - it returns the number of elements in a linked list
 * @h: it notates the head
 * Return: number of elements
 */


size_t list_len(const list_t *h)
{
	int b = 0;

	while (h != NULL)
	{
		b++;
		h = h->next;
	}
	return (b);
}
