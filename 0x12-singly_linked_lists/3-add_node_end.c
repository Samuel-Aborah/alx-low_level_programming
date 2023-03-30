#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - A function that adds a new node at the
 * end of a list
 * @head: head of the list
 * @str: pointer to the head of the lists
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	unsigned int len;
	list_t *new = *head;

	while (str[len])
		len++;

	end = (list_t *) malloc(sizeof(list_t));

	if (!end)
		return (NULL);

	end->str = strdup(str);
	end->len = len;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (new->next)
		new = new->next;

	new->next = end;
	return (end);
}
