#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list and sets the head to NULL
 * @head: pointer to pointer to the head of a list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	/** Frees the list */
	while (*head != NULL)
	{
		ptr = *head;
		ptr = (*head)->next;
		free(ptr);
	}
	/** Sets the head of the list to NULL */
	*head = NULL;
}
