#include "hash_tables.h"

/**
 * set - mallocs a key/value can be to the hash_table
 * @key: the key & string cannot be empty
 * @value: the value associated with ,the key can be empty string
 * Return: pointer to new node
 */
hash_n_t *set(const char *key, const char *value)
{
	hash_n_t *n = malloc(sizeof(hash_n_t));

	if (n == NULL)
		return (NULL);
	n->key = malloc(strlen(key) + 1);
	if (n->key == NULL)
		return (NULL);
	n->value = malloc(strlen(value) + 1);
	if (n->value == NULL)
		return (NULL);
	strcpy(n->key, key);
	strcpy(n->value, value);
	return (n);
}

/**
 * set1 -  set key = value pairing to the first array of element
 * @ht: pointer to the hash_table
 * @key: the key & string cannot be empty
 * @value: the value with the key, can be empty string
 * @index: the key's index
 * Return: the n or NULL if failed
 */
int set1(hash_table_t *ht, const char *key,
		  const char *value, unsigned long int index)
{
	hash_n_t *n = set(key, value);

	if (n == NULL)
		return (0);
	n->next = NULL;
	ht->array[index] = n;
	return (1);
}

/**
 * hash_table_set - add an element to the hash_table
 * @ht: pointer to the hash_table array
 * @key: the key & string cannot be empty
 * @value: the value with the key can be empty string
 * Return: 1 on success, 0 on error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_n_t *n;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	n = ht->array[index];
	if (n == NULL)
		return (set1(ht, key, value, index));
	while (n != NULL)
	{
		if (strcmp(n->key, key) == 0)
		{
			if (strcmp(node->value, value) == 0)
				return (1);
			free(n->value);
			node->value = malloc(strlen(value) + 1);
			if (n->value == NULL)
				return (0);
			strcpy(n->value, value);
			return (1);
		}
		n = n->next;
	}
	if (n == NULL)
	{
		n = set(key, value);
		if (n == NULL)
			return (0);
		n->next = ht->array[index];
		ht->array[index] = n;
		return (1);
	}
	return (0);
}
