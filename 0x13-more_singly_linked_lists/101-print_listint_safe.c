#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - A function that prints the
 * safe version of a linked list
 * @head: a pointer to the head node of a list
 * Return: Number of nodes in the list, else exit
 * program with status 98 upon failure
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *curr;
	const listint_t *new;

	curr = head;

	if (curr == NULL)
		exit(98);

	else
	{
		while (curr != NULL)
		{
		printf("[%p]%d\n", (void *)curr, curr->n);
		num++;

		new = curr->next;
			if (new < curr)
			{
				printf("-> [%p] %d\n", (void *)new, new->n);
				break;
			}
			curr = new;
		}
	}
	return (num);
}
