#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list from memory
 * @head: the list to free
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	while (*head != 0)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
