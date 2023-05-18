#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at given position
 *
 * @h: head node
 * @idx: index of new node
 * @n: value at new node
 * Return: address of new node.NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *head;
	unsigned int i;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head_node->next->prev = new_node;
						head_node->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (new_node);
}
