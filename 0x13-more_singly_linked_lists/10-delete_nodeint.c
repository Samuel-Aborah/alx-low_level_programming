#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node
 * at index of a linked list
 * @head: double pointer to a list
 * @index: The index of the node to be deleted
 * Return: 1 upon success, else -1 upon failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *del;
	unsigned int count = 0;

	/* Point head to the current node */
	curr = *head;

	/* If list is empty */
	if (head == NULL || *head == NULL)
		return (-1);
	/* Traverse the list to the prior node before the deletion point */
	while (count < index && curr)
	{
		del = curr;
		curr = curr->next;
		count++;
	}

	/* Deleting first node */
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	/* If index is out of range */
	if (curr == NULL)
		return (-1);

	/* Delete node at given index */
	del->next = curr->next;
	free(curr);
	return (1);
}
