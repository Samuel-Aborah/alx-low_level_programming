#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head node
 * of a linked list.
 * @head: double pointer to the head node
 * Return: The head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	/** If linked list is empty */
	if (*head == NULL)
		return (0);

	/** Assign address values */
	else
	{
		data = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	return (data);
}
