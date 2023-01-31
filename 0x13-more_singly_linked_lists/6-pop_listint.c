#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pop listint
 * @head: first input
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int lost = 0;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	lost = (*head)->n;

	free(*head);
	*head = temp;

	return (lost);
}
