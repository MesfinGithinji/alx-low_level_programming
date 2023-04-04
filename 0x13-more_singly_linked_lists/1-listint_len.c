#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: linked list
 *
 * Return: return number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t node = 0;

while (h)
{
node++;
h = h->next;
}
return (node);
}
