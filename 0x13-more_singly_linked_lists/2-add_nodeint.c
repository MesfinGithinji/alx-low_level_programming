#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer to the haead of the list
 * @n: integer value inside the node
 *
 * Return: NULL for failure or address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}

