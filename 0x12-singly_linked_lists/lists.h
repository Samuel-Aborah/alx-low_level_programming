#ifndef LISTS_H
#define LISTS_H

/**
 * struct node - Structure called node
 * @str: a string
 * @len: length of a string
 * @next: points to the next node
 * Description: This is a struct for a list
 */

typedef struct node
{
	char *str;
	unsigned int len;
	struct node *next;
}list_t;

#include <stddef.h>

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
