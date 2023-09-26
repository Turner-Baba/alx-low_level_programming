#include "lists.h"
/**
 * create_new_node - it creates anew node
 * @n: data of the new node
 * Return: pointer
 */
listint_t *create_new_node(int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->n = n;
	NewNode->next = NULL;

	return (NewNode);
}

/**
 * insert_nodeint_at_index - a function that inserts a new node at an index
 * @head: pointer to the head pointer
 * @idx: index the new node is to be inserted
 * @n: data of the new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tp;
	listint_t *tp_old;
	listint_t *NewNode;

	tp = *head;
	if (head == NULL)
		return (NULL);
	NewNode = create_new_node(n);
	if (NewNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = NewNode;
		return (NewNode);
	}

	if (idx == 0)
		*head = NewNode;
	for (i = 0; i < idx - 1 && tp != NULL && idx != 0; i++)
		tp = tp->next;
	if (tp == NULL)
		return (NULL);
	if (idx == 0)
		NewNode->next = tp;
	else
	{
		tp_old = tp->next;
		tp->next = NewNode;
		NewNode->next = tp_old;
	}
	return (NewNode);
}
