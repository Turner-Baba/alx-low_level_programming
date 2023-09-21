#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * @h: pointer to the head of the node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);

	for (count = 1; h->next != NULL; count++)
		h = h->next;
	return (count);
}
