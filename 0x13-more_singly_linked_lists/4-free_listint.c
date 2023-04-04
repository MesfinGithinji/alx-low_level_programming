#include "lists.h"

/**
 * free_listint - free up the linked list
 * @head: the pointer to the linked list to free
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}

