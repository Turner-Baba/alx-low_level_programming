#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  function that prints the sum of the two diagonals
 * @a: integers
 * @size: size of int
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, tsum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		tsum += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum, tsum);
}
