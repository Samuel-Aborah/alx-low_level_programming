#include "lists.h"

/**
 * free_listint_safe - A function that frees a list
 * @h: double pointer to head node
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *curr = *h, *new;

	while (curr != NULL)
	{
		new = curr->next;
		free(curr);
		num++;

		if (new == *h)
		{
			*h = NULL;
			break;
		}
		curr = new;
	}
	return (num);
}
