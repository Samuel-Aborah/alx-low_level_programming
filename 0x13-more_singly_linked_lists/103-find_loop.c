#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list
 * @head: a pointer to the head of a list
 * Return: Address of node where loop starts, else NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *kimba, *stud;

	if (head == NULL)
		return (NULL);

	kimba = stud = head;

	while (stud != NULL && stud->next != NULL)
	{
		kimba = kimba->next;
		stud = stud->next->next;

		if (kimba == stud)
		{
			kimba = head;

			while (kimba != stud)
			{
				kimba = kimba->next;
				stud = stud->next;
			}
			return (kimba);
		}
	}
	return (NULL);
}
