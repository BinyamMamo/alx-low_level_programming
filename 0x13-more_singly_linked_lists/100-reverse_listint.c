#include "lists.h"

/**
 * reverse_listint - reverse listint
 * @head: first input
 *
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *temp;

	if (*head == NULL)
		return (NULL);

	prev = NULL;
	*head = (*head)->next;
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		*head = temp;
		prev = *head;
	}
	*head = prev;

	return (*head);
}
