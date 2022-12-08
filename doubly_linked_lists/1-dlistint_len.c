#include "lists.h"

/**
 * dlistint_len- returns the number of elements in a linked list.
 * @h: pointer to the header of the list.
 * Return: number of nodes in the list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nod = 0;

	while (h)
	{
		h = h->next;
		num_nod += 1;
	}
	return (num_nod);
}
