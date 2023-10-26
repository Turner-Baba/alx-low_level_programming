#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @index: position
 * @n: a pointer
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(size_t) * 8)
		return (-1);
	x = 1;
	x = x << index;
	*n = ((*n) | x);
	return (1);
}
