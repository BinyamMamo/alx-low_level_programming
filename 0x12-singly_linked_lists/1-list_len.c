#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - returns the length of a linked list
 * @h: the linked list
 *
 * Return: the length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != 0)
	{
		h = h->next;
		len++;
	}

	return (len);
}
