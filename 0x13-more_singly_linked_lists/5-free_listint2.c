#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list and sets the head to NULL
 * @head: pointer to pointer to the head of a list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	/** Sets head to NULL */
	if (head == NULL)
		return;
	/** Frees a list */
	else
	{
		while (*head != NULL)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr);
		}
	}
}
