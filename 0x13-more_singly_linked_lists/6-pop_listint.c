#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - A function that delete the head node of a linked list
 * and returns head node's data (n)
 * @head: double pointer to the head of the list
 * Return: 0 if list is empty else the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	/* If linked list is empty */
	if (*head == NULL || head == NULL)
		return (0);

	/* point the pointer of head to the next node */
	tmp = *head;
	value = tmp->n;
	*head = tmp->next;
	/* free unused memory */
	free(tmp);

	/* Return head node's data */
	return (value);
}
