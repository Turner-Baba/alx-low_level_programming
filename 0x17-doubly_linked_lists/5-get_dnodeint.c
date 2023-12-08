#include "lists.h"
/**
 * get_dnodeint_at_index - a function thats gets a node at a specific index
 * @head: a pointer to the head of the lst
 * @index: the index of node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (!head)
			return (NULL);
		head = head->next;
		index--;
	}

	return (head);
}
