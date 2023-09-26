#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data (n) of list
 * @head: pointer to the head pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
