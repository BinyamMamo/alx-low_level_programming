#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list from memory
 * @head: the list to free
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
