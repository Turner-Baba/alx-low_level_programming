#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1
 * @n: pointer to the bit
 * @index: position of the bit
 * Return: (1) on success else (0)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);
	i = 1;
	i = i << index;
	*n = ((*n) | i);
	return (1);
}
