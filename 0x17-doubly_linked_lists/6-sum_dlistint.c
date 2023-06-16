#include "lists.h"

/**
 * sum_dlistint - returns the sum of  the data
 * @head: pointer the list
 * Return: sum of data in list, 0 if the sum is empty
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sum_node = head;
	int sum = 0;

	while (sum_node)
	{
		sum += sum_node->n;
		sum_node = sum_node->next;
	}

	return (sum);
}
