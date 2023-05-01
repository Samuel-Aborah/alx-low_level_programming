#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - A function that adds a new node at the beginning
 * of a list.
 * @head: double pointer to the head of a list
 * @n: the value
 * Return: Address of new element, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/* If the program fails */
	if (head == NULL)
		return (NULL);

	/* Allocate memory to new node */
	new = (listint_t *) malloc(sizeof(listint_t));

	/* If malloc fails */
	if (new == NULL)
		return (NULL);

	/* Traverse the list */
	new->n = n;
	new->next = *head;
	*head = new;

	/* Return address of new element */
	return (new);
}
