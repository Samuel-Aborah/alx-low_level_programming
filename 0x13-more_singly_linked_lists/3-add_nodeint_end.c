#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a new node at
 * the end of a list
 * @head: double pointer to head of lists
 * @n: the value
 * Return: Address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr, *end;

	/* If program fails */
	if (head == NULL)
		return (NULL);

	/* Allocate memory to new node */
	end = (listint_t *) malloc(sizeof(listint_t));

	/* If malloc fails */
	if (end == NULL)
		return (NULL);

	/* Put in the value */
	end->n = n;

	/** This is the last node, thus its next node is NULL */
	end->next = NULL;

	/* If linked liist is empty, make end as head */
	if (*head == NULL)
		*head = end;

	else
	{
		/* point head pointer to current node */
		curr = *head;

		/* Traverse until last node */
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		/* Change the next of the current node to the end node */
		curr->next = end;
	}
	/* Return address of new element */
	return (end);

}
