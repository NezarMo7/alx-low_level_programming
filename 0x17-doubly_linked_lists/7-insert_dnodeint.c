#include "lists"

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
	dlistint_t *tmp = *h, *new;

	If (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next->prev = new;
	tmp->next = new;

	return (new);
}
