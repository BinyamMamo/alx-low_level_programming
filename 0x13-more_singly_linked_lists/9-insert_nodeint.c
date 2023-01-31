#include "lists.h"

/**
 * insert_nodeint_at_index - insert nodeint at index
 * @head: first input
 * @idx: second input
 * @n: third input
 *
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, length = 0;
	listint_t *temp, *node;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}

	if (idx > length + 1)
		return (NULL);

	while (*head != NULL && i < idx)
	{
		*head = (*head)->next;
		i++;
	}

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = (*head)->next;
		(*head)->next = node;
	}

	return (*head);
}
