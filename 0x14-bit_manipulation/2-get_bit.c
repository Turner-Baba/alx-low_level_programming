#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @index: the index of the bit
 * @n: number to be checked
 * Return: int 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (j = 0; j < index; j++)
		n = n >> 1;
	return ((n & 1));
}
