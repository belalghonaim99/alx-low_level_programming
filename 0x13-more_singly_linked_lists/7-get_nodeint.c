#include "lists.h"

/**
 * get_nodeint_at_index - returns the node a certain index in linked list
 * @head: first node in the linked list
 * @index: index the node to return
 *
 * Return: pointer to the node we are need it or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
