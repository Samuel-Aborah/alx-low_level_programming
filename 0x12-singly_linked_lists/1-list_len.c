#include "main.h"

/**
 * list_len - A function that returns the number of
 * elements in a linked list
 * @h: pointer to the head of the list
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count;

	h = head;

	while (h->next != NULL)
	{
		count++;
	}
	return (count);
}
