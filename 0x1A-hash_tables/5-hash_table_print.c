#include "hash_tables.h"

/**
 * hash_table_print - prints hash_table
 * @ht: Pointer to the hash table to print it
 *
 * Descrip: Key/value both are printed
 * they show in the array of the hash_table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int i;
	unsigned char comma_table = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_table == 1)
				printf(", ");

			n = ht->array[i];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			comma_table = 1;
		}
	}
	printf("}\n");
}
