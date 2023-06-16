#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of dnodeint
 * @head: pointer the first element
 * @n: int set in node
 * Return: address the new element, or NULL if  failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *c, *y = *head;

	c = malloc(sizeof(dlistint_t));
	if (c == NULL)
		return (NULL);
	c->n = n;
	c->next = NULL;

	if (y)
	{
		while (y->next)
			y = y->next;
		c->prev = y;
		y->next = c;
	}
	else
	{
		*head = c;
		c->prev = NULL;
	}

	return (c);
}
