#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list from memory
 * @head: the list to free
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != 0)
	{
		if (head->str != NULL)
		{
			free(head->str);
			head->str = NULL;
		}
		free(head);
		head = head->next;
	}
}
