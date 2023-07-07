#include "hash_tables.h"

/**
 * hash_table_get - the value with key in hash_table
 * @ht: Pointer to the hash_table
 * @key: key to get value
 * Return: the key cant matched NULL
 * otherwise - value associated with key at ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_i((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	n = ht->array[index];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;

	return ((n == NULL) ? NULL : n->value);
}
