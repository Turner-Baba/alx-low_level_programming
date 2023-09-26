#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: pointer to the head
 * @n: node to beadded to the list
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	if (head == NULL)
		return (0);

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);
	if (*head == NULL)
		NewNode->next = NULL;
	else
		NewNode->next = *head;
	NewNode->n = n;
	*head = NewNode;

	return (0);
}
