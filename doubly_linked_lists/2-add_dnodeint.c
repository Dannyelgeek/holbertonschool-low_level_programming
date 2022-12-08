#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a list.
 * @head: current location in the list.
 * @n: number tu add in the lists.
 * Return: *head if exited correctly.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod, *tmp;

	new_nod = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_nod)
		return (NULL);
	new_nod->n = n;
	new_nod->prev = NULL;
	new_nod->next = NULL;
	if (!head)
	{
		new_nod->next = NULL;
		*head = new_nod;
		return (*head);
	}
	tmp = *head;
	new_nod->next = tmp;
	tmp->prev = new_nod;
	*head = new_nod;
	return (new_nod);
}
