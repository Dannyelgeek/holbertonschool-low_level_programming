#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list.
 * @head: pointer to the header of the list.
 * @str: strings on the list.
 * Return: nend_nod if exited correctly.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int ind = 0, count = 0;
	list_t *nend_nod;
	list_t *tmp;

	nend_nod = (list_t *)malloc(sizeof(list_t));
	if (!nend_nod)
		return (NULL);

	while (str[ind] != '\0')
	{
		ind += 1;
		count += 1;
	}

	nend_nod->len = ind;
	nend_nod->str = strdup(str);
	nend_nod->next = NULL;

	if (!*head)
	{
		*head = nend_nod;
		return (nend_nod);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = nend_nod;

	return (nend_nod);
}
