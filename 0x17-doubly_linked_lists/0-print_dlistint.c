#include "lists.h"
/**
 * print_dlistint - a function that prints all elements in a list
 * @h: a pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nm = 0;

	while (h)
	{
		nm++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nm);
}
