#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a member to the linked list
 * @head: the linked list
 * @str: a string to store in the new member
 *
 * Return: the modified version of the linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;

	*head = node;
	return (node);
}
