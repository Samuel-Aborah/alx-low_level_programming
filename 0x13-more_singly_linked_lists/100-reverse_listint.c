#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: A double pointer to the head of a linked list
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *current, *new;

	previous = NULL;

	current = new = *head;

	while (new != NULL)
	{
		new = new->next;
		current->next = previous;
		previous = current;
		current = new;
	}
	*head = previous;
	return (*head);
}
