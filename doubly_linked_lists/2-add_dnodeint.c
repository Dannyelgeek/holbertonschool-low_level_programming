#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a list.
 * @head: current location in the list.
 * @n: number tu add in the lists.
 * Return: new_nod if exited correctly.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod, *tmp;

	if (!head)
		return (NULL);
	new_nod = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_nod)
		return (NULL);

	new_nod->n = n;
	new_nod->prev = NULL;
	tmp = *head;
	*head = new_nod;
	new_nod->next = tmp;

	if (tmp)
		tmp->prev = *head;
	return (new_nod);
}
