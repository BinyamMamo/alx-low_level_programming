#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - get nodeint at index
 * @head: first input
 * @index: second input
 *
 * Return: listint_t
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h = *head, *temp;

	if (h == NULL)
		return (-1);

	if (index == 0)
	{
		temp = h->next;
		free(h);
		return (1);
	}

	while (i < index - 1)
	{
		if (h->next == NULL)
			return (-1);
		h = h->next;
		i++;
	}

	temp = h->next;
	h = temp->next;
	free(temp);

	return (1);
}
