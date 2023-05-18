#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 *
 *
 * @h: head node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cntr;

	cntr = 0;

	if (h == NULL)
		return (cntr);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		cntr++;
		h = h->next;
	}

	return (cntr);
}
