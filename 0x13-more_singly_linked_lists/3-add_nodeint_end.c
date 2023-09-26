#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: pointer to the head pointer
 * @n: new node to be added at the end of the list
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode;
	listint_t *temp;

	(void)temp;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = NewNode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = NewNode;
	}
	return (*head);
}
