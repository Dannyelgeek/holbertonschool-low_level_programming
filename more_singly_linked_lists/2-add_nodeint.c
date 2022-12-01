#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: pionter of the header of th lists
 * @n: num on the lists
 * Return: new_nod if exited correctly
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nod;

	new_nod = (listint_t *)malloc(sizeof(listint_t));
	if (!new_nod)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;

	if (!head)
		head = &new_nod;
	if (!(*head))
		*head = new_nod;
	else
	{
		new_nod->next = *head;
		*head = new_nod;
	}
	return (new_nod);
}
