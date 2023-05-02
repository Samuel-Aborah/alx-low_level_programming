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

	curr = head;

	for (; curr != NULL; num++)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		nxt = curr;
		curr = curr->next;

		if (nxt <= curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}

	}
	return (num);
}
