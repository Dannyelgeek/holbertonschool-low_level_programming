#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list.
 * @h: linked list to print
 * Return: number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
    size_t num_nod = 0;

    while(h)
    {
        printf("%d\n", h->n);
        h = h->next;
        num_nod += 1;
    }
    return (num_nod);
}
