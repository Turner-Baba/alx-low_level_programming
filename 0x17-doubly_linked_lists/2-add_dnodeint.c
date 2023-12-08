#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the start of a list
 * @head: a double pointer to the list
 * @n: what to be added to the new node
 * Return: a pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nwnode;

	if (!head)
		return (NULL);
	nwnode = malloc(sizeof(dlistint_t));
	if (!nwnode)
		return (NULL);
	nwnode->n = n;
	nwnode->prev = NULL;
	nwnode->next = *head;
	*head = nwnode;
	if (nwnode->next)
		(nwnode->next)->prev = nwnode;
	return (nwnode);
}
