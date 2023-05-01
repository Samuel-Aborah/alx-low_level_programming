#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of
 * a linked list
 * @index: index of the node starting from 0
 * @head: pointer to the head of the list
 * Return: NULL if node does not exist else return nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *curr;

	/* point the head to the current node */
	curr = head;

	/* loop through the linked list */
	for (a = 0; curr != NULL; a++)
	{
		/* if the count is equal to the index, return the current node */
		if (a == index)
			return (curr);

		/*change the current node to point to the next of the current node */
		curr = curr->next;
	}
	/* return NULL if node does not exist */
	return (NULL);
}
