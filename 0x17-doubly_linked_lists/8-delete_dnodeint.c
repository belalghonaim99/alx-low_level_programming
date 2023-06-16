#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of dlistint_t
 * @head: pointer to list.
 * @index: position the node to delete.
 * Return: 1 if success, -1 if failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *y_node = *head;
	dlistint_t *node_for_delete = *head;
	unsigned int i;
	unsigned int count = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = node_for_delete->next;
		free(node_for_delete);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	i = index - 1;
	while (y_node && count != i)
	{
		count++;
		y_node = y_node->next;
	}
		if (count == i && y_node)
	{
		node_for_delete = y_node->next;
		if (node_for_delete->next)
		node_for_delete->next->prev = y_node;
		y_node->next = node_for_delete->next;
		free(node_for_delete);
		return (1);
	}

	return (-1);
}
