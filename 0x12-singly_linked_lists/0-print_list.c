#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints the linked list
 * @h: the linked list to print
 *
 * Return: the length of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != 0)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] (nil)\n", h->len);
		h = h->next;
		len++;
	}

	return (len);
}
