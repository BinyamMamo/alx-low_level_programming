#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - get nodeint at index
 * @head: first input
 * @index: second input
 *
 * Return: listint_t
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h = *head, *temp;

	if (h == NULL || index > listint_len(h))
		return (-1);

	while (h != NULL && i < index - 1)
	{
		h = h->next;
		i++;
	}

	temp = h->next;
	free(h);
	h = temp;

	return (1);
}

/**
 * listint_len - returns the length of a linked list
 * @h: the linked list
 *
 * Return: the length of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	listint_t *temp = (listint_t *)h;

	while (temp != 0)
	{
		temp = temp->next;
		len++;
	}

	return (len);
}
