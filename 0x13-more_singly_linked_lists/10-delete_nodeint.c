#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - get nodeint at index
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

	while (h != NULL && i < index)
	{
		h = h->next;
		i++;
	}

	temp = h->next;
	free(h);
	h = temp;

	return (1);
}
