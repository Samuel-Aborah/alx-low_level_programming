#include "lists.h"

/**
 * sum_listint - A function that returns sum of all
 * data of a linked list
 * @head: pointer to the head of a list
 * Return: If list is empty, 0 else the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	else
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}
