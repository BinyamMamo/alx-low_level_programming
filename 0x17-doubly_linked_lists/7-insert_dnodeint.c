#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at an index
 * @h: head of dlist
 * @idx: node index
 * @n: data to add
 *
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *i, *new;
    int index = 0;

    for (i = *h; i != NULL; i = i->next)
    {
        if (idx == index)
        {
            new = malloc(sizeof(dlistint_t));
            if (!new)
                return (NULL);
            new->n = n;
            new->next = i->next;
            i = new;
            new->prev = i;
        }
        index++;
    }

    return (new);
}
