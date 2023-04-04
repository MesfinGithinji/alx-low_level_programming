#include "lists.h"

/**
 * pop_listint - Deletes the head node of the linked list.
 * @head: pointer to the head of the list.
 *
 * Return: If list is empty return- 0. else return the data of the node.
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int num;

if (*head == NULL)
return (0);

tmp = *head;
num = (*head)->n;
*head = (*head)->next;

free(tmp);

return (num);
}

