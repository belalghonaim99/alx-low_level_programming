#include "list.h"

/**
 * delete_nodeint_at_index - deletes node in linked list at certain index
 * @head: pointer to the first element in the list
 * @index: index the node to delete
 *
 * Return: 1 Success or -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
