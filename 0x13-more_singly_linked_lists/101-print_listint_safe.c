#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - A function that prints a linked list
 * @head: Pointer to the head of a list
 * Return: number of nodes in list, else exit with status 98
 * upon failure
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *new;
	size_t num = 0;

	curr = head;

	/* If program fails */
	if (head == NULL)
		exit(98);

	/* Print list using loop */
	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		num++;

		new = curr->next;

		if (new <= curr)
		{
			printf("-> [%p] %d\n", (void *)new, new->n);
			break;
		}
		new = curr;
	}
	/* Return number of nodes in the list */
	return (num);
}
