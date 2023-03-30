#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list
 * @head: pointer to the head of the lists
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (ptr != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
