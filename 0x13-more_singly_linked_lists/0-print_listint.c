#include "lists.h"

/**
 * print_listint - print all elements of linked list
 * @h: pointer to head of linked list
 *
 * Return: return the number of nodes
 *
*/

size_t print_listint(const listint_t *h)
{
size_t node = 0;

while (h)
{
node++;
printf("%d\n", h->n);
h = h->next;
}
return (node);
}
