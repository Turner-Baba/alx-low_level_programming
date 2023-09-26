#include "lists.h"
/**
 * free_listint2 - a function that frees a list and sets head to NULL
 * @head: pointer to the head pointer)
 */
void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}
	free(*head);
	*head = NULL;
}
