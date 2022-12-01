#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the header of the list.
 * @idx: location to insert the node
 * @n: value of the node to insert.
 * Return: new_nod if exited correctly.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currnt, *new_nod;

	currnt = *head;
	new_nod = (listint_t *)malloc(sizeof(listint_t));
	if(!new_nod)
		return (NULL);
	new_nod->n = n;
	if (idx == 0)
	{
		new_nod->next = currnt;
		*head = new_nod;
		return (*head);
	}
	while (idx > 1)
	{
		currnt = currnt->next;
		idx--;
		if (!currnt)
		{
			free(new_nod);
			return (NULL);
		}
	}
		new_nod->next = currnt->next;
		currnt->next = new_nod;
		return (new_nod);
}
