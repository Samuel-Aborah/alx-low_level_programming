#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a list
 * @head: The head of a list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
