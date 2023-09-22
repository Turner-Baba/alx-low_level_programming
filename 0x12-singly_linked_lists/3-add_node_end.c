#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);
/**
 * add_node_end - a function that adds a new node at the end
 * @head: pointer to the first node
 * @str: node to be added
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *NewNode;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		NewNode = create_node(str);
	if (NewNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = NewNode;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = NewNode;
	return (*head);
}
/**
 * create_node - a function that creates a new node
 * @str: string to be added to the new node
 * Return: pointer to the memory
 */
list_t *create_node(const char *str)
{
	list_t *NewNode;

	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->str = strdup(str);
	NewNode->len = len(str);
	NewNode->next = NULL;
	return (NewNode);
}
/**
 * len - length of the string
 * @str: string
 * Return: length
 */
int len(const char *str)
{
	int j;

	if (str == NULL)
		return (0);

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}
