#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth
 * node a linked list
 * @head: double pointer to head of a list
 * @index: Index of the node, which starts at 0
 * Return: Null if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int num;

	for (num = 0; node != NULL; num++)
	{
		if (num == index)
			return (node);
	node = node->next;
	}
	return (NULL);
}
