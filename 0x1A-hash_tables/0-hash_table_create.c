#include "hash_tables.h"

/**
 * hash_table_create - Create a hash_table
 * @size: the size, in number of nodes, to create new hash_table
 * Return: a pointer to new created hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int y = 0;
	hash_table_t *h1 = malloc(sizeof(hash_table_t));

	if (h1 == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	h1->size = size;
	h1->array = malloc(sizeof(hash_node_t *) * size);
	if (h1->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (; y < size; y++)
		h1->array[y] = NULL;

	return (h1);
}
