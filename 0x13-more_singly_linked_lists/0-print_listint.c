#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - prints the linked list
 * @h: the linked list to print
 *
 * Return: the length of the linked list
 */
size_t print_listint(const listint_t *h);
{
	size_t len = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
