#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a list
 * @h: head pointer to the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count_thru;

	if (h == NULL)
		return (0);
	for (count_thru = 0; h != NULL; count_thru++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count_thru);
}
