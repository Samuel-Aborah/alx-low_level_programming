#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given position.
 * @head: double pointer to the head of a list
 * @idx: index of the list where the node should be added
 * @n: the value
 * Return: NULL if it fails else, return address of node
 */

listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int count = 1;

	/* If program fails */
	if (head == NULL)
		return (NULL);
	/* Allocate memory to new node */
	new = (listint_t *) malloc(sizeof(listint_t));
	/* If malloc fails */
	if (new == NULL)
		return (NULL);
	/* Set value of new node */
	new->n = n;
	/* Insert head pointer at beginning of list */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	/*Point head to tmp */
	tmp = *head;
	/* Traverse the list to the prior position of the insertion point */
	while (count < idx && tmp)
	{
		tmp = tmp->next;
		count++;
	}
	/* Check length of list as compared to the index */
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	/* Insert new node */
	new->next = tmp->next;
	tmp->next = new;
	return (new);

}
