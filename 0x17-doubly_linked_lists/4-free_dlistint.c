#include "lists.h"

/**
 * free_dlistint - free dlistint_t
 * @head: pointer the list
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *first_node;
	dlistint_t *last_node;

	if (head)
	{
		first_node = head;
		last_node = head->next;
		while (last_node)
		{
			free(first_node);
			first_node = last_node;
			last_node = last_node->next;
		}
		free(first_node);
	}
}
