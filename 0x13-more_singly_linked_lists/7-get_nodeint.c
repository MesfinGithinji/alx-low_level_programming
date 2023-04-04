#include "lists.h"

/**
 * get_nodeint_at_index - return the node at a certain position in the list
 * @head: a pointer to the first/head node in the linked list
 * @index: index of the node to be located.
 *
 * Return: return a NULL if node is not there , else node is there.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;

for (node = 0; node < index; node++)
{
if (head == NULL)
return (NULL);

head = head->next;
}

return (head);
}
