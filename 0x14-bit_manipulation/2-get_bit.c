#include "main.h"
/**
 * get_bit - returns the value of a bit in a given index
 * @n: a pointer
 * @index:position of the bit
 * Return: 1 on success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int z;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (z = 0; z < index; z++)
		n = n >> 1;
	return ((n & 1));
}
