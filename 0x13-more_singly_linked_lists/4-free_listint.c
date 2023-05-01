#include "lists.h"

/**
 * free_listint frees a linked list to frees a listint_t list
 * @head: listint_t list to be frees
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
