#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: pointer to an array
 * @n: no of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
