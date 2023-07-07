#include "hash_tables.h"

/**
 * hash_table_delete - delete hash_table
 * @ht: Pointer to hash_table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *y = ht;
	hash_node_t *n, *x;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n = ht->array[i];
			while (n != NULL)
			{
				x = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = x;
			}
		}
	}
	free(y->array);
	free(y);
}
