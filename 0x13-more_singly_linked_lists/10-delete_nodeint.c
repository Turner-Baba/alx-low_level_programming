#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * @head: pointer to the head pointer
 * @index: index of node to be deleted
 * Return: if successful (1) else (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tp;
	listint_t *nod;

	tp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && tp != NULL && index != 0; i++)
		tp = tp->next;
	if (tp == NULL)
		return (-1);
	if (index == 0)
	{
		nod = tp->next;
		free(tp);
		*head = nod;
	}
	else
	{
		if (tp->next == NULL)
			nod = tp->next;
		else
			nod = tp->next->next;
		free(tp->next);
		tp->next = nod;
	}
	return (1);
}
