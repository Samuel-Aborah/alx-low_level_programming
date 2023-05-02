#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that frees a list
 * @h: double pointer to head of list
 * Return: size of list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *curr, *new;

	/* Set head pointer to current node */
	curr = *h;

	/* If the program fails */
	if (h == NULL || *h == NULL)
		return (-1);

	/* set head to NULL */
	*h = NULL;

	/* Run a loop to free memory */
	for (; curr != NULL; size++)
	{
		if (curr <= curr->next)
		{
			new = curr;
			curr = curr->next;
			free(new);
		}
		else
		{
			free(curr);
			break;
		}
	}
	return (size);
}
