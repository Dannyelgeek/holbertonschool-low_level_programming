#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of the list.
 * @head: current location in the list.
 * @n: number tu add in the lists.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nod, *tmp;

	if (!head)
		return (NULL);
	new_nod = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_nod)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;
	tmp = *head;

	if (!(*head))
	{
		*head = new_nod;
		new_nod->prev = NULL;
		return (new_nod);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_nod;
	new_nod->prev = tmp;
	return (new_nod);
}
