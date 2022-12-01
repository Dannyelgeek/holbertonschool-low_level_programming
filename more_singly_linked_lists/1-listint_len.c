#include "lists.h"

/**
 * listint_len -  prints the number of elements of a list.
 * @h: pointer to th header of th list.
 * Return: l_size if exited correctly.
*/

size_t listint_len(const listint_t *h)
{
	unsigned int l_size = 0;

	if (!h)
		return (l_size);
	while (h)
	{
		l_size += 1;
		h = h->next;
	}
	return (l_size);
}
