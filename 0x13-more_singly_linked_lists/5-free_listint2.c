#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list from memory
 * @head: the list to free
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *node = *head;

	if (*head == NULL)
		return;
	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	*head = NULL;
}
