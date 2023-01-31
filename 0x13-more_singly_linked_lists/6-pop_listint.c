#include "lists.h"

/**
 * pop_listint - pop listint
 * @head: first input
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = (*head)->next;
	int ret = (*head)->n;
	free(*head);
	*head = temp;

	return (ret);
}
