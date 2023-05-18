#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index.
 *
 * @head: head node of list.
 * @index: new node index.
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *first;
	dlistint_t *second;
	unsigned int i;

	first = *head;

	if (first != NULL)
		while (first->prev != NULL)
			first = first->prev;

	i = 0;

	while (first != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = first->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				second->next = first->next;

				if (first->next != NULL)
					first->next->prev = second;
			}

			free(first);
			return (1);
		}
		second = first;
		first = first->next;
		i++;
	}
	return (-1);
}
