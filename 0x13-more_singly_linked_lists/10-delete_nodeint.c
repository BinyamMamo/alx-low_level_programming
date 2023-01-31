#include "lists.h"

/**
 * get_nodeint_at_index - get nodeint at index
 * @head: first input
 * @index: second input
 *
 * Return: listint_t
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *h = *head;

	if (h == NULL)
		return (NULL);

	while (h != NULL && len < index)
	{
		h = h->next;
		len++;
	}

	return (h);
}
