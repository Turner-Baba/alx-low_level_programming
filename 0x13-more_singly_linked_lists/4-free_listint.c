#include "lists.h"
/**
 * free_listint - a function that frees a list
 * @head: head pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tp;

	while ((tp = head) != NULL)
	{
		head = head->next;
		free(tp);
	}
}
