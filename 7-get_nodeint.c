#include "lists.h"

/**
 * get_nodeint_at_index - get nodeint at index
 * @head: first input
 * @index: second input
 *
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && len < index)
	{
		head = head->next;
		len++;
	}

	return (head);
}
