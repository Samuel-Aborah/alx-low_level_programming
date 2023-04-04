#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that inserts
 * a new node at a given position
 * @head: A double pointer to the head of the list
 * @idx: The index where the node should be added.
 * @n: The integer
 * Return: Null upon failure else address of the
 * new node
 */

listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int count = 0;

	/** If function fails */
	if (*head == NULL)
		return (NULL);

	/** Allocating memory to new node */
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	/** Assign value to node */
	new->n = n;

	/** Insert new node at beginning of list */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;

	/** traverse the list */
	while (count < idx - 1 && current != NULL)
	{
		current = current->next;
		count++;
	}
	/** free the memory of the new list */
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	/** Insert after current node */
	new->next = current->next;
	current->next = new;
	return (new);
}
