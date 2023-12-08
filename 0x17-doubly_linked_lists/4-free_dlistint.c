#include "lists.h"
/**
 * free_dlistint - a function that frees a list
 * @head: a pointer to the head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ntnode;

	while (head)
	{
		ntnode = head->next;
		free(head);
		head = ntnode;
	}
}
