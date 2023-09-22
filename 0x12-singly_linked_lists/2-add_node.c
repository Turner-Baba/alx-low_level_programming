#include "lists.h"
int len(const char *str);
/**
 * add_node - a function that adds a new node at the beginning
 * @head: pointer of the head of the list
 * @str: string to be added to the first place
 * Return: pointer to the first node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode;

	if (head == NULL)
		return (NULL);
	NewNode = malloc(sizeof(list_t));
	if (NewNode == NULL)
		return (NULL);

	if (*head == NULL)

		NewNode->next = NULL;
	else
			NewNode->next = *head;
		NewNode->str = strdup(str);
		NewNode->len = len(str);
		*head = NewNode;
	return (*head);
}
/**
 * len - gets the length of the string
 * @str: string to get the length
 * Return: length of the string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
