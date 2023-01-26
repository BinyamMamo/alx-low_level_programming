#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a member at the end of the linked list
 * @head: the linked list
 * @str: a string to store in the new member
 *
 * Return: the modified version of the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = NULL, *loop = *head;

	if (*head != NULL)
		while (loop->next != NULL)
			loop = loop->next;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
		loop->next = node;

	return (node);
}
