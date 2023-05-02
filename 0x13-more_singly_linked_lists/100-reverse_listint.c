#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: double pointer to head of a list
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *prev;

	prev = NULL;

	/* If program fails */
	if (!head)
		return (NULL);

	/* Reverse the list using head as first pointer */
	while (*head)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = curr;
	}

	/* Point head pointer to previous node */
	*head = prev;
	/* Return pointer to first node of reversed list */
	return (prev);
}
