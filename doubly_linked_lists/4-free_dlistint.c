#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: pointer to the header of th list.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		tmp->prev = NULL;
		tmp->next = NULL;
		free(tmp);
	}
}
