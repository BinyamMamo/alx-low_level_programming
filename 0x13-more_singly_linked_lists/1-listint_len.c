#include "lists.h"

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
