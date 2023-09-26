#include "lists.h"
/**
 * free_listp - free a linked list
 * @head: head of a inked list
 * Return: void
 */
void free_listp(listp_t **head)
{
	listp_t *tp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tp = current) != NULL)
		{
			current = current->next;
			free(tp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - a function that prints a linked list
 * @head: pointer to thr head pointer
 * Return: total number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listp_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	free_listp(&ptr);
	return (node);
}
