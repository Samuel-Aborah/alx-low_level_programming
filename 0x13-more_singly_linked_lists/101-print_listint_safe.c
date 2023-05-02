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
	new = head->next;

	/* Using a loop where curr moves by 1 and new by 2 */
	while (new != NULL && new < curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
		new = new->next;

		if (new != NULL && new < curr)
			new = new->next;
		num++;
	}

	/* new reaches end of list, prints addr & value of last node to curr */
	if (new != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		num++;
	}

	if (!head)
		exit(98);

	return (num);
}
