#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: pointer to the header of the list.
 * @str: strings on the list.
 * Return: new_nod if exited correctly.
*/

list_t *add_node(list_t **head, const char *str)
{
	int ind = 0, count = 0;
	list_t *new_nod;

	new_nod = (list_t *)malloc(sizeof(list_t));
	if (!head)
		return (NULL);

	if (!new_nod)
		return (NULL);

	while (str[ind] != '\0')
	{
		ind += 1;
		count += 1;
	}

	new_nod->len = ind;
	new_nod->str = strdup(str);
	new_nod->next = *head;

	*head = new_nod;

	return (new_nod);
}
