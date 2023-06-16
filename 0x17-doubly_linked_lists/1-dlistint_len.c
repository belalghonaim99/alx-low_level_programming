#include "lists.h"

/**
 * dlistint_len - returns the numbers of elements in it 
 * @h: pointer the list.
 * Return: numbers of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		count++;
		node = node->next;
	}

	return (count);
}
