#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the header of the list.
 * @idx: Where to add the node.
 * @n: value of th node.
 * Return: the address of the new node, or NULL if it failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_nod;

	new_nod = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_nod)
		return (NULL);
	new_nod->n = n;
	tmp = *h;
	if (!tmp)
	{
		new_nod->prev = NULL;
		new_nod->next = NULL;
		*h = new_nod;
		return (new_nod);
	}
	if (idx == 0)
	{
		new_nod->prev = NULL;
		new_nod->next = tmp;
		tmp->prev = new_nod;
		*h = new_nod;
		return (new_nod);
	}
	while (idx > 1 && tmp->next)
	{
		tmp = tmp->next;
		idx -= 1;
	}
	if (idx > 1 && !tmp->next)
		return (NULL);
	new_nod->prev = tmp;
	new_nod->next = tmp->next ? tmp->next : NULL;
	if (tmp->next)
		tmp->next->prev = new_nod;
	tmp->next = tmp->next && idx > 1 ?  NULL : new_nod;
	return (new_nod);
}
