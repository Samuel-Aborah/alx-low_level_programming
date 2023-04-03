#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - A function that adds a new node at the
 * beginning of a lstint_t list
 * @head: head of the list
 * @n: integer
 * Return: NULL if it fails, else the address of the new
 * element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	/** Allocate memory to the node */
	node = (listint_t *) malloc(sizeof(listint_t));

	/** Incase of failure */
	if (node == NULL)
		return (NULL);

	/** Assign address values to the nodes */
	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
