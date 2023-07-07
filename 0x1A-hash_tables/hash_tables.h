#ifndef __hash_tables__
#define __hash_tables__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - node of hashtable
 * @key: key & string
 * key is unique in the hashtable
 * @value: value to a key
 * @next: pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: Size of array
 * @array:array of size
 * every cell of array is pointer to the first node of a linkedlist
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

unsigned long int hash_djb2(const unsigned char *str);

unsigned long int key_index(const unsigned char *key, unsigned long int size);

hash_node_t *set_pair(const char *key, const char *value);

int set_pair_only(hash_table_t *ht, const char *key, const char *value,
		  unsigned long int size);

int hash_table_set(hash_table_t *ht, const char *key, const char *value);

char *hash_table_get(const hash_table_t *ht, const char *key);

void hash_table_print(const hash_table_t *ht);

void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: the key % string
 * the key is unique in hashtable
 * @value: The value to a key
 * @next: pointer to the next node of the List
 * @sprev: pointer to previous element of sort linked_list
 * @snext: pointer to next element of sort linked_list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Every cell of array is pointer to the first node of a linked_list
 * @shead: pointer to first Element of the sort linked list
 * @stail: pointer to last Element of the sort linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);

shash_node_t *set_spair(const char *key, const char *value);

shash_node_t *set_spair_only(shash_table_t *ht, const char *key,
			    const char *value, unsigned long int index);

int update_value(shash_node_t *node, const char *value);

shash_node_t *set_spair_front(shash_table_t *ht, const char *key,
			     const char *value, unsigned long int index);

int slist_set_first(shash_table_t *ht, shash_node_t *node);

int slist_set(shash_table_t *ht, shash_node_t *old_node, shash_node_t *node);

int slist_set_end(shash_table_t *ht, shash_node_t *node);

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

char *shash_table_get(const shash_table_t *ht, const char *key);

void shash_table_print(const shash_table_t *ht);

void shash_table_print_rev(const shash_table_t *ht);

void shash_table_delete(shash_table_t *ht);

#endif
