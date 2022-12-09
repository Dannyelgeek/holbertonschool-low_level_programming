#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: array size.
 * Return: the pointer to the newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int ind = 0;
	hash_table_t *new_tab = NULL;

	new_tab = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!new_tab)
		return (NULL);
	new_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_tab->array)
	{
		free(new_tab);
		new_tab = NULL;
		return (NULL);
	}
	while (ind < size)
	{
		new_tab->array[ind] =  NULL;
		ind += 1;
	}
	new_tab->size = size;
	return (new_tab);
}
