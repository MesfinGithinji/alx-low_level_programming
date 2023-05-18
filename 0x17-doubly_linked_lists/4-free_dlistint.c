#include "lists.h"

/**
 * free_dlistint - frees the  list
 *
 * @head: head node
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *msh;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((msh = head) != NULL)
	{
		head = head->next;
		free(msh);
	}
}
