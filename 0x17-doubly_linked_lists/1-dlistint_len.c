#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elments in a list
 * @h: a pointer to the head
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nm = 0;

	while (h)
	{
		nm++;
		h = h->next;
	}

	return (nm);
}
