#include "lists.h"

/**
  * add_node - it adds a new node to the head of a list
  * @head: it contains address of the first node
  * @str: the string
  * Return: address of new element, or NULL if failed
  * str needs to be duplicated
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
