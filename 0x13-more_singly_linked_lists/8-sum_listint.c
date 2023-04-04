
#include "lists.h"

/**
 * sum_listint - Calculate the sum of all data in the list.
 * @head: pointer to the head of the list.
 *
 * Return: return- 0.if list is empty. else sum of all data.
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
