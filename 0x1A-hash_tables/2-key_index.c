#include "hash_tables.h"

/**
 * key_index - give index of the key
 * @key: the key & string
 * @size: size of array of the hash table.
 *
 * Return: Index numbers for key or value in the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
