#include "list.h"

/**
 * print_listint
 * linked list of type listint_t and print
 * Return: number of node
 */
size_t print_listint(const listin_t *h)

{
	size_t num = 0;
	while (h)
	{
		printf("%d\n", h->n);
	
	num++
	h = h->next;
	}

	return (num)
}	
