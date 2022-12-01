#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a linked list.
 * @head: pointer of the header of the list.
 * @index: index of the node that should be deleted.
 * Return: 1 if exited correctly.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cpy = *head;
	unsigned int nod = 0;

	if (!cpy)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	while (nod < (index - 1))
	{
		if (!cpy->next)
			return (-1);
		cpy = cpy->next;
		nod += 1;
	}
	tmp = cpy->next;
	cpy->next = tmp->next;
	free(tmp);
	return (1);
}
