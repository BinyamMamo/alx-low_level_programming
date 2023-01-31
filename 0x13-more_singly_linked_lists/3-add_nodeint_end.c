#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a member at the end of the linked list
 * @head: the linked list
 * @n: integer to store in the new member
 *
 * Return: the modified version of the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL, *loop = *head;

	if (*head != NULL)
		while (loop->next != NULL)
			loop = loop->next;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
		loop->next = node;

	return (node);
}
