#include "lists.h"

/**
 * free_list - function that Frees a list_t list
 * @head: it contains base address of the list
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list);
	}
}
