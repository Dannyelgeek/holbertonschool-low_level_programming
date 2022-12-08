#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list.
 * @h: pointer to the header of the list.
 * Return: number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nod += 1;
	}
	return (nod);
}
