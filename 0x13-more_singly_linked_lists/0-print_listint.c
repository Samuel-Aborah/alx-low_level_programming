#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all elements of a list
 * @h: pointer to the head of a list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	/* Traverse the list */
	while (h != NULL)
	{
		/** Print the current node value */
		printf("%d\n", h->n);
		/** Increment the number */
		num++;
		/** move the pointer to the next node */
		h = h->next;

	}
	return (num);
}
