#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: pointer to the header of th list
*/

void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
