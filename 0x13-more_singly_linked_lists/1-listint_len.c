#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in
 * a linked listint_t list.
 * @h: a pointer to the head of lists
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; h = h->next)
		num++;

	return (num);
}
