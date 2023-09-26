#include "lists.h"
/**
 * reverse_listint - a function that reverses a linked list
 * @head: pointer to the head pointer
 * Return: pointer to the first element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tp;
	listint_t *new_tp;

	if (head == NULL || *head == NULL)
		return (NULL);
	tp = *head;
	*head = tp->next;
	tp->next = NULL;

	while (*head != NULL)
	{
		new_tp = (*head)->next;
		(*head)->next = tp;
		tp = *head;
		if (new_tp == NULL)
			return (*head);
		*head = new_tp;
	}
	if (*head == NULL)
	{
		*head = tp;
		return (*head);
	}
	return (NULL);
}
