#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a list
 * @head: pointer to the head of a list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	/* If head is not empty */
	while (head != NULL)
	{
		/* point head to the next node */
		tmp = head;
		head = head->next;
		/* free unused memory */
		free(tmp);
	}

}
