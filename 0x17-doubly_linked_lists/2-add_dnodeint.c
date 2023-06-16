#include "lists.h"

/**
 * add_dnodeint - add new node to dnodeint
 * @head: pointer the first element
 * @n: int set in node
 * Return: address of the element
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *c;

	c = malloc(sizeof(dlistint_t));
	if (c == NULL)
		return (NULL);

	c->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = c;
	*head = c;

	return (c);
}
