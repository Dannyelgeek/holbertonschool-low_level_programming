#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 * @head: pointer to the header of the list.
 * Return: ind if exited correctly.
*/

int pop_listint(listint_t **head)
{
	int ind;
	listint_t *currnt, *tmp;

	if (!head)
		return (0);
	tmp = currnt = *head;
	if (*head)
	{
		ind = currnt->n;
		*head = currnt->next;
		free(tmp);
	}
	else
		ind = 0;
	return (ind);
}
