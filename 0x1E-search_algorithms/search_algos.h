#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - singly linked list
 * @n: for integer
 * @index: index the node in list
 * @next: pointer to next array
 *
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
