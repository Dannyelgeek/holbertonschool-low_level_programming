#include "lists.h"

/**
 * print_list - prints all the elements of a list.
 * @h: pointer to the header of the list.
 * Return: nod if exited correctly.
*/

size_t print_list(const list_t *h)
{
	size_t nod = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nod++;
		h = h->next;
	}
	return (nod);
}

