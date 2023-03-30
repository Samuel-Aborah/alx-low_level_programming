#include "lists.h"
#include <stdlib.h>

/**
 * list_len - A function that returns number of
 * elements in a linked list
 * @h: pointer to the head of the lists
 * Return: Returns the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
