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

	if (*head == NULL || (*head)->next == NULL)
		return (0);

	temp = (*head)->next;

	free(*head);
	*head = temp;

	return ((*head)->n);
}
