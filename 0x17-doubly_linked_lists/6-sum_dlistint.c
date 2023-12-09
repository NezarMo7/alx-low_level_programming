#include "lists.h"

/**
 *sum_dlistint - sums all numbers of dlist
 *
 * @head: pointer to current head node
 *
 * Return: int
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
