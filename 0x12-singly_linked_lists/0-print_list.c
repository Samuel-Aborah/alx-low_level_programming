#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to the head of the nodes
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (!h->str)

			printf("[0] (nill)\n");

		else
			printf("[%u]%s\n", h->len, h->str);

		h = h->next;
		node++;

	}
	return (node);
}
