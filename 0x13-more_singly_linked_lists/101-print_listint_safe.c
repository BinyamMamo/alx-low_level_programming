#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints the linked list
 * @head: the linked list to print
 *
 * Return: the length of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	listint_t *h = (listint_t *)head;

	if (h == 0)
	{
		exit(98);
	}

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
