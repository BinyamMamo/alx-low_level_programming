#include "lists.h"

/**
 * print_listint - prints the linked list
 * @h: the linked list to print
 *
 * Return: the length of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	listint_t *head = (listint_t *)h;

	while (head != 0)
	{
		printf("%d\n", head->n);
		head = head->next;
		len++;
	}

	return (len);
}
