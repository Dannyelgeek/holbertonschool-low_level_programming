#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the header of th list.
 * @index: index of the node, starting from 0
 * Return:
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t cnt = 0;

	while (head)
	{
		if (cnt == index)
			break;
		cnt += 1;
		head = head->next;
	}
	return (head);
}
