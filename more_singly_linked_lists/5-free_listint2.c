#include "lists.h"

/**
 * free_listint2 - frees a list.
 * @head: pointer to the header of th list
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp ,*currnt;

	if (!head)
		return;
	currnt = *head;
	while (currnt)
	{
		tmp = currnt;
		currnt = currnt->next;
		free(tmp);
	}
	*head = NULL;
}
