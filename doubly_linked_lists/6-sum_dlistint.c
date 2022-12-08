#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the header of th list.
 * Return: the sum of all nodes.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
