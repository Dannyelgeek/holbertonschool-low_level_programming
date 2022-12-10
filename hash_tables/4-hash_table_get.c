#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is the hash table you want to look into.
 * @key: is the key to looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	hash_node_t  *tmp = NULL;

	if (!key)
		return (NULL);
	if (ht)
	{
		ind = key_index((const unsigned char *)key, ht->size);
		tmp = ht->array[ind];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
