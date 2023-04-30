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

	while (h != NULL)
	{
		h = h->next;
		printf("%d\n", h->n);
		num++;
	}
	return (num);
}
