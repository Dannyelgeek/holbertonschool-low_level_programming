#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list.
 * @head: pointer to the header of the list.
 * @index: hich node to stop at.
 * Return: n if exited correctly.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n < index)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
		n += 1;
	}
	return (head);
}
