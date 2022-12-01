#include "lists.h"

/**
 * print_listint -  prints all the elements of a list.
 * @h: pointer to th header of th list.
 * Return: l_size if exited correctly.
*/

size_t print_listint(const listint_t *h)
{
	unsigned int l_size = 0;

	if (!h)
		return (l_size);
	while (h)
	{
		printf("%d\n", h->n);
		l_size += 1;
		h = h->next;
	}
	return (l_size);
}
