#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * Add node - A function that adds a new node at the 
 * beginning of a list
 * @head: head of the lists
 * @str: pointer to the head of the lists
 * Return: the address of the new element, or null on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t node;

	/** Allocate memory for the node */
	node = (lsit_t *) malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	/** duplicate str */
	node->str = strdup(str);

	if (node->str == NULL)
	{
		free (node);
		return (NULL);
	}
	node->len = 0;

	/** assign value to the node */
	while (str[node->len] != '\0')
		node->len++;

	node-> next = NULL;

	/** create a head */ 	
	head = node;

	return (node);

}
