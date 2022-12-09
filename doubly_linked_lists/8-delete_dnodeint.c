#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * @head: first node in double linked list
 * @index: node deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nod;
	unsigned int i;

		i = index;
		nod = *head;

	while (i > 0 && nod)
	{
		nod = nod->next;
		i -= 1;
	}
	if (!nod)
		return (-1);

	if (nod->next)
		nod->next->prev = nod->prev;

	if (nod->prev)
		nod->prev->next = nod->next;

	if (!index)
		*head = nod->next;

	free(node);
	return (1);
}