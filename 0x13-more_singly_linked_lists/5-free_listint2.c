#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a list and sets head to null
 * @head: double pointer to the head of a list
 */

void free_listint2(listint_t **head)
{
	listint_t *end;

	/* if head is not empty */
	while (*head != NULL)
	{
		/* point the pointer of head to the next node */
		end = *head;
		*head = (*head)->next;
		/* Free unused memory */
		free(end);
	}
	/* Set head to NULL */
	*head = NULL;

}
