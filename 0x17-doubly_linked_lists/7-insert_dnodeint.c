#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node in a dlist at a given position
 *
 * @h: A pointer to the head of the dlist
 *
 * @idx: the index of new node
 *
 * @n: The int for new node
 *
 * Return: NULL or the address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp_node = *h;

	if (new_node)
	{
		new_node->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				new_node->next = *h;
				(*h)->prev = new_node;
			}
			*h = new_node;
			return (new_node);
		}
		while (i < idx - 1 && tmp_node)
		{
			tmp_node = tmp_node->next;
			i++;
		}
		if (tmp_node)
		{
			if (tmp_node->next)
				tmp_node->next->prev = new_node;
			new_node->next = tmp_node->next;
			new_node->prev = tmp_node;
			tmp_node->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
