#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: pointer to the list
 * Return: an int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tp = *head;
	*head = (*head)->next;
	free(tp);
	return (n);
}
