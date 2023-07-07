#include "hash_tables.h"

/**
 * hash_table_set - add or update Element in hash_table
 * @ht: Pointer to hash_table
 * @key: add key , cannot be an empty string
 * @value: The value associate with the key
 * Return: 1 on success 0 on error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *value_duplicate;
	unsigned long int index, y;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_duplicate = strdup(value);
	if (value_duplicate == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (y = index; ht->array[y]; y++)
	{
		if (strcmp(ht->array[y]->key, key) == 0)
		{
			free(ht->array[y]->value);
			ht->array[y]->value = value_duplicate;
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(value_duplicate);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = value_duplicate;
	n->next = ht->array[index];
	ht->array[index] = n;

	return (1);
}
