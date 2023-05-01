#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in
 * a linked list.
 * @h: a pointer to the head of a list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	/* Traverse the list */
	while (h != NULL)
	{
		/* Increment the number */
		num++;

		/* move the pointer to the next node */
		h = h->next;
	}
	/* Return number of elements */
	return (num);
}
