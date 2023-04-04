#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node
 * at index of a linked list
 * @head: double pointer to head of a list
 * @index: The index of the node that should be deleted
 * Return: 1 if successful else 0 if it it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/** Initializing and declaration variables and pointers */
	unsigned int i = 0;
	listint_t *tmp = *head, *ptr;

	/** If program fails */
	if (*head == NULL)
		return (-1);

	/** Traverse the list in search of node at given index */
	while (i < index)
	{
		if (tmp == NULL)
			return (-1); /** Check if index is within range */
		i++;

		ptr = tmp;
		tmp = tmp->next;
	}
	/** the node to delete either the head of the list or not */
	if (tmp == *head)
		*head = tmp->next;

	else
		ptr->next = tmp->next;

	/** free memory of the node */
	free(tmp);

	return (1);
}
