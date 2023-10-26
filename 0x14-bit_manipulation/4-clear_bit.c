#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @index: position of bits
 * @n: a pointer
 * Return: 1 0n success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int y;

	y = 1;
	y = y << index;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	if (((*n >> index) & 1) == 1)
		*n = y ^ *n;

	return (1);
}
