#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all data
 * of a linked list
 * @head: pointer to head of a list
 * Return: 0 if empty else return sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	/* If list is empty */
	if (head == NULL)
		return (0);

	else
	{
		while (head != NULL)
		{
			/* Traverse all nodes to calculate their sum */
			sum = sum + head->n;
			head = head->next;
		}
	}
	/* return the sum of all data */
	return (sum);
}
