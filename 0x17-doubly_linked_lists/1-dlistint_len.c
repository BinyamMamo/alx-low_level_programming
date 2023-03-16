#include "lists.h"

/**
 * dlistint_len - finds the length of a dlist
 * @h: head of dlist
 *
 * Return: length of dlist
 */

size_t dlistint_len(const dlistint_t *h)
{
    int counter = 0;

    if (h == NULL)
        return (counter);

    while (h != NULL)
    {
        counter++;
        h = h->next;
    }

    return (counter);
}
