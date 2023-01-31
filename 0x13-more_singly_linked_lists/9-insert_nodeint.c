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
	listint_t *h = *head, *node;

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
		if (h == NULL || h->next == NULL)
			return (NULL);
		h = h->next;
		i++;
	}
	node->next = h->next;
	h->next = node;

	return (node);
}
