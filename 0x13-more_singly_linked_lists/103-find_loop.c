#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop
 * in a linked list
 * @head: pointer to the head node of a list
 * Return: Address of the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *tmp = head;

	while (tmp != NULL && tmp->next != NULL)
	{
		ptr = ptr->next;
		tmp = tmp->next->next;

		if (ptr == tmp)
		{
			ptr = head;

			while (ptr != tmp)
			{
				ptr = ptr->next;
				tmp = tmp->next;
			}
			return (ptr);
		}
	}
	return (NULL);
}
