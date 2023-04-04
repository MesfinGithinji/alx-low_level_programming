#include "lists.h"

/**
 * add_nodeint_end - add a node at end of the list
 * @head: pointes to the head of the list
 * @n: integer value inside the new node
 *
 * Return: return a pointer to the new node, or NULL for failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
*head = new;

else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}

return (*head);
}
