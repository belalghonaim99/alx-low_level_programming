#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node of dlistint_t
 * @head: pointer the list.
 * @index: index of node Starting from 0
 * Return: node, if node doesn't exist, return NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node_index = head;
	unsigned int count = 0;

	while (node_index && count != index)
	{
		count++;
		node_index = node_index->next;
	}
	if (node_index && count == index)
		return (node_index);
	return (NULL);
}
