#include "lists.h"
/**
 * free_list - a function that frees a list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *tpp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tpp = head->next;
		free(head->str);
		free(head);
		head = tpp;
	}
	free(head->str);
	free(head);
}
