#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints the safe versio of a list
 * @head: pointer to the head of the list
 * Return: number of nodes to the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr;
	const listint_t *nxt;
	size_t num = 0;

	/* point head pointer to current node */
	curr = head;

	/* Initiate pointer to NULL */
	nxt = NULL;

	/* traverse the list */
	for (; curr != NULL; num++)
	{
		/* print current's node address and value */
		printf("[%p] %d\n", (void *)curr, curr->n);
		nxt = curr;
		/* move to next node */
		curr = curr->next;

		/* check if the nxt pointer points to an already accessed node */
		if (nxt != NULL && nxt <= curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}

	}
	return (num);
}
