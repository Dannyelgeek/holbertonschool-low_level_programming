#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table to add or update.
 * @key: the key.
 * @value: value associated with the key.
 * Return: 1 if exited correctly.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = 0;
	char *tmp_val = NULL;
	hash_node_t *tmp = NULL;
	hash_node_t *new = NULL;

	if (!ht || !ht->array || !value)
		return (0);
	if (!strlen(key) || !key)
		return (0);
	tmp_val = strdup(value);
	if (!tmp_val)
		return (0);
	ind = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[ind];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = tmp_val;
			tmp->value = strdup(value);
			free(tmp_val);
			return (1);
		}
		tmp = tmp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = tmp_val;
	new->next = ht->array[ind];
	ht->array[ind] = new;
	return (1);
}
