#include "lists.h"

/**
 * add_nodeint_end - 
 * @head:
 * @n:
 * Return:
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nend_nod, *tmp;

	nend_nod = (listint_t *)malloc(sizeof(listint_t));
	if (!nend_nod)
		return (NULL);
	
	nend_nod->n = n;
	nend_nod->next = NULL;

	if (!(*head))
	{
		*head = nend_nod;
		return (*head);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = nend_nod;
	return (*head);
}
