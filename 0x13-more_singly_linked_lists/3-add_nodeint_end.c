#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a new node to the
 * end of a list
 * @head: head of the list
 * @n: integer
 * Return: Null upon failure else the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *tmp = *head;

	/** Allocate memory for the new node */
	end = (listint_t *) malloc(sizeof(listint_t));

	if (end == NULL)
		return (NULL);

	/** Assign address values to the nodes */
	end->n = n;
	end->next = NULL;


	/** If the list is empty, the new node is now head */
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
	}

	/** Add the new node to the end of the list */
	tmp->next = end;
	return (end);
}
