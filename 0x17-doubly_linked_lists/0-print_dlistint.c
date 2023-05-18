#include "lists.h"

/**
 * print_dlistint - prints all elements of the list
 * 
 *
 * @h: head node of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cntr;

	cntr = 0;

	if (h == NULL)
		return (cntr);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cntr++;
		h = h->next;
	}

	return (cntr);
}
