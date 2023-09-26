#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in a list
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count_thru;

	if (h == NULL)
		return (0);
	for (count_thru = 0; h != NULL; count_thru++)
	{
		h = h->next;
	}
	return (count_thru);
}
