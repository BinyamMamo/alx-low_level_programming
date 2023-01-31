#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds a member to the linked list
 * @head: the linked list
 * @n: integer to store in the new member
 *
 * Return: the modified version of the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;
	return (node);
}
