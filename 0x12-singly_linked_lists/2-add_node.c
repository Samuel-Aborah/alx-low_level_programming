#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - A function that adds a new node at the
 * beginning of a list
 * @head: head of the lists
 * @str: pointer to the head of the lists
 * Return: the address of the new element, or null on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nodeA;
	unsigned int len = 0;

	while (str[len])
		len++;

	/** Allocate memory for the node */
	nodeA = (list_t *) malloc(sizeof(list_t));

	if (nodeA == NULL)
		return (NULL);

	/** duplicate str */
	nodeA->str = strdup(str);

	/** assign address values to nodes */
	nodeA->len = len;
	nodeA->next = *head;
	*head = nodeA;

	return (*head);
}
