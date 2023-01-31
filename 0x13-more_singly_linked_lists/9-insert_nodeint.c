#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert nodeint at index
 * @head: first input
 * @idx: second input
 * @n: third input
 *
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (i < idx - 1)
	{
		if ((*head)->next == NULL)
			return (NULL);
		*head = (*head)->next;
		i++;
	}
	node->next = (*head)->next;
	(*head)->next = node;

	return (node);
}
