#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list
 * @head: pointer to the head of the lists
 */

void free_list(list_t *head)
{
	list_t *ptr;

	if (head)
	{
		ptr = head->next;
		if (head->str)
		free(head->str);
		free(head);
		head = ptr;
	}
}
